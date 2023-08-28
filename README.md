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

A structure is an aggregate variable data type. Whereas an array must hold values that are all the same data type, a **structure can hold several values of different data types**.

Before using a structure variable, you must tell C exactly what the structure looks like with a struct statement. The struct statement lets C know how many members are in the structure and the data types of each member. A structure variable is like a group of more than one variable of different data types. Key concepts:

• Define structures when you want to group items of different data types.

• Declare a structure before defining a structure variable.

• Use the dot operator to access individual data members within a structure variable.

• Use the -> (the structure pointer operator) to access individual data members within a structure pointed to by a pointer variable.

• Don’t use member names as variables. Member names exist only so you can work with an individual part of a structure.

• Don’t forget to add a semicolon to the end of all structure definitions.

• Don’t intermix the dot operator and the structure pointer operator. Remember that a structure variable must appear before the dot operator, and a structure pointer variable must appear before the -> operator

### Files

Your C program must open a file before data can be written to or read from the file. When your program is done with a file, the program should close the file.

When reading from a file, you must check for the end-of-file condition to ensure that you don’t try to read past the end of the file. The feof() function is a built-in C function that you use to check for the end of the file. Key concepts include:

• **w** - Writes to a file

• **a** - Appends new data to a file

• **r** - Reads from a file

• Store long-term data in data files.

• Open a file with fopen() before you use the file.

• **Always close a file with fclose() when you’re done**.

• Don’t read from a file without checking for feof() because you might have previously read the last line in the file.

• Don’t use the filename when you open a file. Use the file pointer that you connected to the file with fopen().

• Don’t forget that the file pointer goes at the beginning of fprintf() and that fputs() requires a file pointer at the end of its argument list.

### Functions

Long programs can become unwieldy unless you break them into several separate functions. One long main() function is analogous to a long book without chapter divisions. Break your long programs into separate functions, and have each function perform a single, separate task in the program.

When you divide your programs into several functions, you have to consider how variables are used throughout the code. Local variables are defined inside a function and are usable only in that function. The opposite of a local variable is a global variable, whose value is usable in all functions after its definition. Global variables are frowned upon. Local variables are safer because you can limit their access to only functions that need to use them. Key concepts include:

• Define local variables after a block’s opening brace. Define global variables before a function begins.

• Local variables are safer than global variables, so use local variables as much as possible.

• Break your programs into lots of functions to ease maintenance and speed development time.

• Don’t define global variables in the middle of a program. They’re too hard to locate if you do.

• Don’t start out using global variables. As your program grows, you might occasionally see the need for a global variable—add one then.

When one function needs access to a local variable defined in another function, you must pass that variable. The parentheses after function names contain the variables you’re passing and receiving.

Normally, you pass non-array variables by value, which means that the receiving function can use them but not affect their values in the calling function. Arrays are passed by address, which means that if the receiving function changes them, the array variables are also changed in the calling function. You can pass non-array variables by address by preceding them with the address-of operator, &, and receiving them with the dereference operator, *. Key concepts include:

• Pass local variables from one function to another if you want the functions to share local variables.

• Pass variables by value if you want their values protected from the called function.

• Pass variables by address if you want their values changed by the called function.

• Place an & before non-array variables you want to pass by address. Leave off the & if you want to pass arrays.

• Don’t pass an array variable by value; C has no way to do that.

**When your program contains a lot of functions, prototype those functions somewhere before main(). The prototypes tell C what to expect. After you prototype, you can pass and return variables of any data type.** (You can return ints only if you don’t prototype.)

The prototype ensures that you don’t inadvertently pass the wrong data types to functions. **For example, if the prototype states that you’ll pass two float values to a function, but you accidentally pass two int variables, C complains**. C doesn’t complain if you don’t prototype, and you might get wrong results because of it.

Now that you know how to return values, you can write functions that mirror those that are built in, such as sqrt() and rand(). When you call a function, that function returns a value based on the function’s code. A function can return a maximum of one value, just like functions that are built in. Key concepts from this chapter include:

• Place the return data type before a function name that returns a value.

• The return value appears after a return statement.

• In the calling function, do something with the return value. Print it or assign it to something. Calling a function that returns a value is useless if you do nothing with the return value.

• Use void as the return data type or in the parameter list if you neither return nor pass values to a function.

• Don’t return more than one value from a function.

• Don’t return a non-integer without a prototype. Better yet, prototype all functions except main().
