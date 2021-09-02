# `getattr_play` - Play with the `__getattr__` method from class definitions

When creating Python classes, we can enable a [`__getattr__`](https://docs.python.org/3/reference/datamodel.html?highlight=__getattr__#object.__getattr__) method to get access to some attributes.

What I want is to modify `__getattr__` on a `SafeBox` object and forbid the access to some "existent" attributes...
When running the `example.py` file, you'll see this output (or that's what you should see):

```
'a': True
'b': False
    (Attribute 'b' exists... but you can't access to it!)
'c': True
'd': False
    (Attribute 'd' exists... but you can't access to it!)
'e': True
'f': True
'g': True
'h': False
    (Attribute 'h' exists... but you can't access to it!)
```

I formatted the messages where `__getattr__` fails (where the result is shown as `False`), but if you try to get access to them manually,
an exception will be raised. For example, if you try to get access to `SafeBox.b` on another Python code:

```
AttributeError: Attribute 'b' exists... but you can access to it!
```
