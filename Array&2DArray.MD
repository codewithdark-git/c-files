### Arrays in C++

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

### 2D Arrays in C++

#### Overview:
- **Definition**: A 2D array is an array of arrays, where each element is itself an array.
- **Declaration**: 2D arrays are declared by specifying the data type of the elements and the number of rows and columns in square brackets `[][]`.
- **Initialization**: 2D arrays can be initialized during declaration or later using nested loops.
- **Accessing Elements**: Individual elements of a 2D array are accessed using row and column indices.

#### Declaration and Initialization:
```cpp
DataType arrayName[Rows][Columns]; // Declaration of a 2D array with specific rows and columns
```

#### Accessing Elements:
```cpp
arrayName[rowIndex][colIndex]; // Accessing an element of the 2D array at a specific row and column index
```

#### Example:
```cpp
const int rows = 3;
const int cols = 3;
int myArray[rows][cols]; // Declaration of a 3x3 integer 2D array

// Initialization of elements
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        myArray[i][j] = i * cols + j + 1;
    }
}

// Accessing and printing elements
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        cout << myArray[i][j] << "\t"; // Output elements separated by tabs
    }
    cout << endl; // Move to the next row
}
