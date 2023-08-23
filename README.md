# C Language

C is a procedural programming language, which means it follows a top-down approach where a program is divided into functions or procedures.
This language is widely used in various domains, including:
- operating systems
- embedded systems
- game development
- application software

Low-level programming: C provides direct access to memory addresses and hardware, making it well-suited for system-level programming and embedded systems.

Info: [C Programming Absolute Beginner's Guide - Greg Perry, Dean Miller.](https://www.amazon.com/Programming-Absolute-Beginners-Guide-3rd/dp/0789751984)

## Pointers and Arrays

**Pointers: C allows the use of pointers, which are variables that store memory addresses.** Pointers are powerful but require careful handling to avoid memory-related bugs.

An array name is really just a pointer that points to the first element in the array.
Using pointers allows more flexibility than arrays. You can directly assign a string literal to a character pointer variable, whereas you must use the strcpy() function to assign strings to arrays. Key concepts:

• Use character pointers if you want to assign string literals directly.

• Use either array subscript notation (myNumbers[0]) or pointer dereferencing (*(myNumbers + 0)) to access array and pointer values.

## Heap

The **heap is the collection of unused memory in your computer**. The only way to access data stored in heap memory is through pointer variables.

The free heap memory is called free heap or unallocated heap memory. The part of the heap in use by your program at any one time is called the allocated heap. Your program might use varying amounts of heap space as the program executes.

Functions (include the stdlib.h header file in all the programs you write that use malloc() and free()):
The *malloc()* (for memory allocate) function allocates heap memory, and the *free()* function deallocates heap memory.

Key notes:

• Tell malloc() exactly how large each allocation must be by using the sizeof() operator inside malloc()’s parentheses.

• If you must track several chunks of heap memory, use an array of pointers. Each array element can point to a different amount of heap space.

• Check to make sure malloc() worked properly. malloc() returns a 0 if the allocation fails.

• Don’t always rely on regular arrays to hold a program’s data. Sometimes a program needs data for just a short time, and using the heap makes better use of your memory resources.

## Structures

A structure is an aggregate variable data type. Whereas an array must hold values that are all the same data type, a structure can hold several values of different data types.

Before using a structure variable, you must tell C exactly what the structure looks like with a struct statement. The struct statement lets C know how many members are in the structure and the data types of each member. A structure variable is like a group of more than one variable of different data types. Key concepts:

• Define structures when you want to group items of different data types.

• Declare a structure before defining a structure variable.

• Use the dot operator to access individual data members within a structure variable.

• Use the -> (the structure pointer operator) to access individual data members within a structure pointed to by a pointer variable.

• Don’t use member names as variables. Member names exist only so you can work with an individual part of a structure.

• Don’t forget to add a semicolon to the end of all structure definitions.

• Don’t intermix the dot operator and the structure pointer operator. Remember that a structure variable must appear before the dot operator, and a structure pointer variable must appear before the -> operator
