# Inheritance
### Explanation of the Code:

1. **Base Class `Base`**:
   - The `Base` class contains three members: `publicMember`, `protectedMember`, and `privateMember`, with different access specifiers.
   - It has a constructor to initialize these members and a `display()` method to display them.

2. **Derived Class `Derived`**:
   - The `Derived` class inherits from the `Base` class publicly.
   - It has a constructor to initialize the base class members and a `displayDerived()` method to display the inherited members along with the base class members.

3. **Main Function**:
   - Inside the `main()` function, an object of the `Derived` class is created.
   - Public members of the base class are accessible directly using the object.
   - Protected and private members of the base class are not directly accessible outside the base class.
   - Both `display()` and `displayDerived()` methods are called to display the base class and derived class members.


# C++ Inheritance and Access Specifiers

This C++ program demonstrates inheritance and the usage of access specifiers (public, protected, and private).

## Description

The program consists of a base class `Base` with public, protected, and private members. It also includes a derived class `Derived` that inherits from the `Base` class publicly. The program illustrates how access specifiers affect the visibility of members in derived classes.

## Author

- Your Name
- GitHub: [Your GitHub Profile](https://github.com/codewithdark-git)

