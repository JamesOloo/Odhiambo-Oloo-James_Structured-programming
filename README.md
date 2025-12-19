1. Difference between a Normal Variable and a Pointer
  normal variable
    stores direct data value eg a number , character etc
      accesses memory directly using its assigned name
  values are read and modified directly eg int a=10;

  pointer
    it stores the memory address of another varriable
    accesses memory indirectly using the derefrence operator (*)to access the       value at the stored address
    values are read and modified indirectly eg int *p =&a; int value =*p; *p=30
    
  **example**
```c
  int normal_var = 10; // Stores the value 10

  int *ptr_var = & normal_var; // Stores the address of normal_var (e.g.,         0x7ffd...)

  int value = normal_var; // value is 10

  int value_via_ptr = *ptr_var; // value_via_ptr is also 10

  normal_var = 20; // normal_var is 20, *ptr_var is 20
  
  *ptr_var = 30; // *ptr_var is 30, normal_var is 30
```
2. Variable Declaration vs. Pointer Declaration (Operators * and &)
* (Asterisk Operator *):
  
In declaration: Signifies that the variable being declared is a pointer (stores an address).

In expression: Acts as the dereference operator, accessing the value at the address stored in the pointer.
*  (Ampersand Operator &):
  Acts as the address-of operator, returning the memory address of a variable

**examples**
```c
  int var;

  int *ptr

  var = 10

  ptr = &var;
```
3. Meaning and Use of Dereferencing a Pointer
Dereferencing a pointer means accessing the data value stored at the memory address the pointer holds. This is done using the unary asterisk (*) operator before the pointer's name.

**example**

```c
int data = 99;

int *data_ptr = &data; // data_ptr stores the address of 'data'

// Access the value using dereferencing:

printf("Value is: %d\n", *data_ptr); // Output: Value is: 99

// Modify the value using dereferencing:

*data_ptr = 150; // The value of 'data' is now 150

printf("New value is: %d\n", data); // Output: New value is: 1
```

5. Scenarios/Use Cases Where Pointers are Preferred

Pointers are preferred for scenarios requiring direct memory manipulation or efficient handling of large data.

Dynamic Memory Allocation: Used to allocate memory from the heap at runtime when the required size is unknown at compile time. This is essential for data structures like linked lists, trees, and graphs, which can grow or shrink dynamically.

Example: Creating a linked list where each node contains a pointer to the next node in the sequence.

Efficient Function Arguments (Pass by Reference): Passing a pointer to a large data structure (like an array or a large object) to a function is more efficient than passing the entire data by value, as it avoids expensive copying.


5. Limitations and Risks Associated with Pointers
The power of pointers comes with significant responsibility and potential pitfalls.

Complexity: Pointers can make code harder to understand, debug, and maintain, especially for beginners.

Memory Leaks: Forgetting to deallocate dynamically allocated memory (using free() or delete) can lead to memory leaks, where the program consumes an increasing amount of memory over time and can eventually crash.

Dangling Pointers: A pointer that still holds the address of a memory location that has been freed or deallocated is called a dangling pointer. Using it can lead to unpredictable behavior or program crashes (segmentation faults).

Wild Pointers: Uninitialized pointers are "wild" and can point to random memory locations. Assigning a value to a wild pointer can corrupt unrelated data in memory.

Security Risks: Improper pointer usage, such as buffer overflows, can introduce serious security vulnerabilities.


6. comparing call by value and call by reference with examples and in each case how data is passed to the functions

    call by value:
   
     data passed- a copy of the actual varriables value
   
     the original varriable remains unchanged
   
     uses more memory since it creates a copy
   
     slower for larger data structures due to copying overhead

   call by reference:

     data passed-the memory address (reference) of the actual variable

     changes inside the function directly affect the original variable

     uses less memory since it works on existing data

     fast for large data structures since no copying is needed

   **  example**

 ( using call by value)

   void swap_by_value(int a, int b) {
   
    int temp = a;
   
    a = b;
   
    b = temp;
   
    // 'a' and 'b' (copies) are swapped locally, original variables outside           remain unchanged.
   
  }

  (using call by reference)

  void swap_by_reference(int *a, int *b) {
    
    int temp = *a;
    
    *a = *b; // Dereference to change the value at the address
    
    *b = temp;
    
    // The values at the original memory addresses are now swapped.
    
}

int main() {

    int x = 5, y = 10;
    
    swap_by_reference(&x, &y); // Pass the addresses of x and y
    // x is now 10, y is now 5
    
    return 0;
    
}

7. Practical Scenarios for Call by Value vs. Call by Reference
   
a. Call by value is preferred:

When the function is not intended to modify the original value of the variable. This makes the code safer and easier to debug, as changes are local to the function's scope.

When passing small, primitive data types like int, char, or double, as copying them is efficient and often faster than the overhead of passing by reference.

When passing literals or temporary values, as they cannot be passed by non-const reference.

b. Call by reference is preferred:

When a function must modify the actual arguments (e.g., a function to initialize multiple object properties or a swap function).

When passing large data structures (arrays, large structs/classes, vectors) to avoid the performance penalty and memory overhead of copying the entire object.

When implementing complex data structures like linked lists or trees that rely on manipulating shared memory locations.

To return multiple "values" from a single function via output parameters.

