In C++, if you don't provide a copy constructor explicitly, the compiler generates a default copy constructor for you. The default copy constructor performs a shallow copy, meaning it copies each member of the source object into the corresponding member of the destination object.


- We define a class `MyClass` with a member variable `value` and a constructor to initialize `value`.
- In the `main()` function, we create an object `obj1` of type `MyClass` with an initial value of `5`.
- We then create another object `obj2` and initialize it with `obj1`. This invokes the default copy constructor, creating `obj2` as a copy of `obj1`.
- We print the values of `value` for both `obj1` and `obj2` to verify that the copy was successful.

The default copy constructor provided by the compiler is sufficient for most cases, especially when dealing with simple member variables. However, if your class contains dynamically allocated resources or requires deep copying, you may need to provide a custom copy constructor.