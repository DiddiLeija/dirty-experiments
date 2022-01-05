# `lists` - Lists and MutableLists in Kotlin

This example shows two of the Kotlin's sequences: `List` and `MutableLists`. The comments
among the code explains some features of these types. To test the code on the web, paste the code
living in `lists.kt` and run it on this Kotlin Playground: https://developer.android.com/training/kotlinplayground.
The code is based on the code suggested by [this Google course](https://developer.android.com/courses/android-basics-kotlin/course).

Expected output:

```
List: [1, 2, 3, 4, 5, 6]
Size: 6
First element: 1
Second element: 2
Last index: 5
Last element: 6
First: 1
Last: 6
Contains 4? true
Contains 7? false
===================
Entrees: []
Add noodles: true
Entrees: [noodles]
Add spaghetti: true
Entrees: [noodles, spaghetti]
Add list: true
Entrees: [noodles, spaghetti, ravioli, lasagna, fettuccine]
Remove spaghetti: true
Entrees: [noodles, ravioli, lasagna, fettuccine]
Remove item that doesn't exist: false
Entrees: [noodles, ravioli, lasagna, fettuccine]
Remove first element: noodles
Entrees: [ravioli, lasagna, fettuccine]
Entrees: []
Empty? true
```
