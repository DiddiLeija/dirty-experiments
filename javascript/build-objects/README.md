# `build-objects` - Build "objects" on JavaScript

I don't consider this is a formal "object". Unlike Python or C++, JavaScript may have that "limitation". Anyway, we can generate a confortable
"pseudo-object" by using a `var`:

```javascript
var MyClass = {
  function1: function() {
    // code for function 1?
  },
  function2: function() {
    // code for function 2?
  }
}
```

This example shows a trick that I use when programming with JavaScript. Also, I added a simple HTML to test how the
script works (you don't need `Node.js` to run this).

_NOTE: I haven't finished this yet, so don't get surprised if you get a weird result on your browser!_
