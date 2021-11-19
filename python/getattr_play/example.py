"""
Play with the __getattr__ method from classes and instances.
This example will test the possibility of modifying the
variable access using __getattr__, and its counterpart __getattribute__.
"""


# Generate a "safe box" object
class SafeBox(object):
    """
    This class contains many attributes: all of them
    exist, but they may not be accessible!
    """
    a = 1.23456789
    b = 214194
    c = "a string"
    d = 2751
    e = d * b + (int(a) * 10)
    f = ["i", "love", "python"]
    g = {"bytes": "no", "unicode": "yeah!"}
    h = """Maybe a large code here..."""
    # Now, here's the hint: the list
    # below has picked the names of variables.
    # Our __getattribute__ will look for this
    # variable to decide what to return...
    allowed = ["a", "c", "e", "g", "f"]  # look for this one at the __getattr__

    def __getattribute__(self, name):
        "some names here are forbidden!"
        try:
            res = object.__getattr__(self, name)
        except:
            raise AttributeError(f"This class has no attribute '{name}'")
        if name.strip() not in self.allowed:
            raise AttributeError(f"Attribute '{name}' exists... but you can't access to it!")
        else:
            return res

    def __getattr__(self, name):
        "some names here are forbidden!"
        return self.__getattribute__(self, name)


# try it out
if __name__ == "__main__":
    instance = SafeBox()
    for item in ("a", "b", "c", "d", "e", "f", "g", "h"):
        print(f"'{item}': ", end="")
        try:
            getattr(item)
            print("True")
        except AttributeError as exc:
            # To avoid issues, and just for testing purposes,
            # we made the code to just "catch and show",
            # without crashing!
            print("False")
            print(f"  ({str(exc)})")
