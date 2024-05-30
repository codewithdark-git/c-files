
### Inheritance

Inheritance allows a class (called a derived class or child class) to inherit properties and behaviors (data members and member functions) from another class (called a base class or parent class). This promotes code reusability and establishes a hierarchical relationship between classes.

#### Basic Syntax

Here is a simple example to illustrate inheritance in C++:

```cpp
#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Eating..." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Barking..." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Defined in Dog
    return 0;
}
```

In this example:
- `Animal` is the base class.
- `Dog` is the derived class that inherits from `Animal`.

The `Dog` class inherits the `eat` method from `Animal`, and it also has its own method, `bark`.

#### Types of Inheritance

1. **Single Inheritance**: A derived class inherits from a single base class.
2. **Multiple Inheritance**: A derived class inherits from more than one base class.
3. **Multilevel Inheritance**: A derived class is derived from another derived class.
4. **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.
5. **Hybrid Inheritance**: A combination of two or more types of inheritance.

### Polymorphism

Polymorphism allows functions or methods to operate in different ways based on the object that is invoking them. In C++, polymorphism is primarily achieved through function overloading, operator overloading, and dynamic (runtime) polymorphism via virtual functions.

#### Function Overloading

Function overloading allows multiple functions to have the same name but different parameters.

```cpp
#include <iostream>

class Print {
public:
    void display(int i) {
        std::cout << "Integer: " << i << std::endl;
    }
    void display(double d) {
        std::cout << "Double: " << d << std::endl;
    }
    void display(std::string s) {
        std::cout << "String: " << s << std::endl;
    }
};

int main() {
    Print p;
    p.display(5);
    p.display(5.5);
    p.display("Hello");
    return 0;
}
```

In this example, the `display` function is overloaded to handle different types of parameters.

#### Operator Overloading

Operator overloading allows defining how operators (e.g., +, -, *) work with user-defined types.

```cpp
#include <iostream>

class Complex {
private:
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator + (const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }
};

int main() {
    Complex c1(3.3, 1.1), c2(1.1, 2.2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
```

Here, the `+` operator is overloaded to add two `Complex` numbers.

#### Dynamic (Runtime) Polymorphism

Dynamic polymorphism is achieved using virtual functions and base class pointers or references.

```cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Bark" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow" << std::endl;
    }
};

void animalSound(Animal *animal) {
    animal->makeSound();
}

int main() {
    Dog d;
    Cat c;
    animalSound(&d); // Outputs: Bark
    animalSound(&c); // Outputs: Meow
    return 0;
}
```

In this example:
- `makeSound` is a virtual function in the base class `Animal`.
- Derived classes `Dog` and `Cat` override this function.
- The function `animalSound` takes a pointer to an `Animal` and calls `makeSound`. The actual function called depends on the type of the object, demonstrating polymorphism.

### Summary

- **Inheritance** allows a derived class to inherit properties and methods from a base class.
- **Polymorphism** allows methods to do different things based on the object they are acting upon, achieved through function overloading, operator overloading, and virtual functions.


### Multiple Inheritance

Multiple inheritance allows a class to inherit from more than one base class. This can be useful, but it can also lead to complexities such as the diamond problem.

#### Example

```cpp
#include <iostream>

class Base1 {
public:
    void show() {
        std::cout << "Base1 class" << std::endl;
    }
};

class Base2 {
public:
    void show() {
        std::cout << "Base2 class" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Derived d;
    d.Base1::show();  // Calls Base1's show()
    d.Base2::show();  // Calls Base2's show()
    d.display();      // Calls Derived's display()
    return 0;
}
```

### Aggregation

Aggregation is a form of association where one class is a part of another class but both can exist independently. It represents a "has-a" relationship.

#### Example

```cpp
#include <iostream>

class Engine {
public:
    void start() {
        std::cout << "Engine started" << std::endl;
    }
};

class Car {
private:
    Engine engine;  // Car has an engine
public:
    void startCar() {
        engine.start();
        std::cout << "Car started" << std::endl;
    }
};

int main() {
    Car car;
    car.startCar();
    return 0;
}
```

### Pointer as Object

In C++, objects can be manipulated using pointers, allowing dynamic memory allocation and access to members through pointers.

#### Example

```cpp
#include <iostream>

class Test {
public:
    void show() {
        std::cout << "Test show function" << std::endl;
    }
};

int main() {
    Test *ptr = new Test;
    ptr->show();  // Accessing member using pointer
    delete ptr;   // Freeing memory
    return 0;
}
```

### Virtual Member Function

A virtual function is a member function that you expect to be redefined in derived classes. When you use a base class pointer or reference to call a virtual function, the call is resolved at runtime.

#### Example

```cpp
#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();  // Calls Derived's show() due to virtual function
    return 0;
}
```

### Static Function

A static member function belongs to the class rather than any object instance. It can access only static members of the class.

#### Example

```cpp
#include <iostream>

class Test {
public:
    static void show() {
        std::cout << "Static function" << std::endl;
    }
};

int main() {
    Test::show();  // Accessing static function without an object
    return 0;
}
```

### Abstract Class

An abstract class is a class that cannot be instantiated and usually contains at least one pure virtual function.

#### Example

```cpp
#include <iostream>

class Abstract {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Derived : public Abstract {
public:
    void show() override {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
```

### Friend Function

A friend function can access private and protected members of a class in which it is declared as a friend.

#### Example

```cpp
#include <iostream>

class Test {
private:
    int x;
public:
    Test() : x(10) {}
    friend void show(Test& t);
};

void show(Test& t) {
    std::cout << "x = " << t.x << std::endl;  // Accessing private member
}

int main() {
    Test t;
    show(t);
    return 0;
}
```

### Friend Class

A friend class can access private and protected members of another class in which it is declared as a friend.

#### Example

```cpp
#include <iostream>

class Test {
private:
    int x;
public:
    Test() : x(10) {}
    friend class FriendClass;  // Friend class declaration
};

class FriendClass {
public:
    void show(Test& t) {
        std::cout << "x = " << t.x << std::endl;  // Accessing private member
    }
};

int main() {
    Test t;
    FriendClass f;
    f.show(t);
    return 0;
}
```

### Diamond Ambiguity

Diamond ambiguity occurs in multiple inheritance when two or more base classes inherit from a common base class and a derived class inherits from these base classes. This can be resolved using virtual inheritance.

#### Example

```cpp
#include <iostream>

class A {
public:
    void show() {
        std::cout << "Class A" << std::endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D d;
    d.show();  // No ambiguity due to virtual inheritance
    return 0;
}
```

### Summary

- **Multiple Inheritance**: A class inherits from more than one base class.
- **Aggregation**: A class has a reference to objects of another class.
- **Pointer as Object**: Manipulating objects using pointers.
- **Virtual Member Function**: Allows dynamic binding and runtime polymorphism.
- **Static Function**: A function that belongs to the class, not instances.
- **Abstract Class**: A class that cannot be instantiated and has pure virtual functions.
- **Friend Function**: A function that can access private members of a class.
- **Friend Class**: A class that can access private members of another class.
- **Diamond Ambiguity**: Resolved using virtual inheritance to avoid multiple inheritance conflicts.

These concepts are crucial in C++ for designing flexible and reusable code.