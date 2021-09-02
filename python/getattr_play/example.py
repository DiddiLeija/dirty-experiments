"Play with the __getattr__ method from class creation."

# generate a "safe box" object
class SafeBox(object):
    "the class contains many attributes: try to get them!"
    a = 1.23456789
    b = 214194
    c = "a string"
    d = 2751
    e = d * b + (int(a) * 10)
    f = ["i", "love", "python"]
    g = {"bytes": "no", "unicode": "yeah!"}
    h = """Maybe a large code here..."""
    # now, here's the hint:
    allowed = ["a", "c", "e", "g", "f"]  # look for this one at the __getattr__

    def __getattribute__(self, name):
        "some names are forbidden!"
        try:
            res = object.__getattr__(self, name)
        except:
            raise AttributeError(f"This class has no attribute '{name}'")
        if name.strip() not in self.allowed:
            raise AttributeError(f"Attribute '{name}' exists... but you can't access to it!")
        else:
            return res

    def __getattr__(self, name):
        "some names are forbidden!"
        return self.__getattribute__(self, name)


# try it out
if __name__ == "__main__":
    instance = SafeBox()
    for item in ("a", "b", "c", "d", "e", "f", "g", "h"):
        print(f"'{item}' ", end="")
        try:
            getattr(item)
            print("True")
        except AttributeError as exc:
            print("False")
            print(f"  ({str(exc)})")
