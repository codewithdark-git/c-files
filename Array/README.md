
## Arrays in C++

#### Overview:
- **Definition**: An array is a collection of elements of the same data type stored in contiguous memory locations.
- **Declaration**: Arrays are declared by specifying the data type of the elements and the number of elements in square brackets `[]`.
- **Initialization**: Arrays can be initialized during declaration or later using assignment statements.
- **Accessing Elements**: Individual elements of an array are accessed using their index, starting from 0.

#### Declaration and Initialization:
```cpp
DataType arrayName[Size]; // Declaration of an array with a specific size
DataType arrayName[] = {element1, element2, ..., elementN}; // Declaration and initialization of an array
```

#### Accessing Elements:
```cpp
arrayName[index]; // Accessing an element of the array at a specific index
```

#### Example:
```cpp
int myArray[5]; // Declaration of an integer array with 5 elements

// Initialization of elements
myArray[0] = 10;
myArray[1] = 20;
myArray[2] = 30;
myArray[3] = 40;
myArray[4] = 50;

// Accessing and printing elements
cout << "Element at index 0: " << myArray[0] << endl;
cout << "Element at index 1: " << myArray[1] << endl;
cout << "Element at index 2: " << myArray[2] << endl;
cout << "Element at index 3: " << myArray[3] << endl;
cout << "Element at index 4: " << myArray[4] << endl;
```

---
