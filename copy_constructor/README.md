A `copy constructor` is a special constructor in C++ that initializes an object using another object of the same class. It is invoked when a new object is created as a copy of an existing object, typically through assignment, initialization, or passing an object by value as a function argument.

The syntax for a copy constructor is similar to that of a regular constructor, but it takes a reference to an object of the same class as its parameter. It is often used to perform a deep copy of the member variables of the source object into the newly created object.

We define a class `MyClass` with a member variable x, a constructor to initialize x, and a `copy constructor`.

The copy constructor takes a reference to another object of type `MyClass` as its parameter and initializes x of the new object with the value of x from the source object.

In the `main()` function, we create an object `obj1` with an initial value of 5.

We then create another object `obj2` and initialize it with `obj1`. This invokes the copy constructor, creating `obj2` as a copy of `obj1`.

We print the values of x for both `obj1` and `obj2` to verify that the copy was successful.

Copy constructors are automatically called when objects are copied, and they ensure that the copy is performed correctly, especially when dealing with dynamically allocated resources or complex objects.