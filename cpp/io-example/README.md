# Simple I/O example with C++

This example shows a simple `main` function, which
takes some values with different types, and print them.
After all, the output must be like this:

```
Introduce a floating number:
> 3.1416

Introduce an integer:
> 501

Floating introduced:
3.1416

Integer introduced:
501

```

_(I tried this with a C++ editor, so tell me if this fails on another cases! Also, some IDE's include aditional output, but you should get the values)_.

## Some notes

The code will try to use the
namespace `std` for the IO, so you should check that first. Also I am taking
a standard library named `iostream` (also check that!).

### Possible value changes

In most of the C++ interpreters, you may see this glitches:

- On the "integer" prompt, you could enter a floating number, but it will be truncated. See this example:

```
Introduce an integer:
> 123.456

[...]

Integer introduced:
123
```

- If you enter text to a numeric prompt, C++ converts it into a 0:

```
Introduce a floating number:
> hello world

[...]

Floating introduced:
0
```
