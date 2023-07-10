
C - malloc, free

Automatic Allocation:
Automatic allocation, also known as static allocation, refers to the process of assigning memory
 to variables or data structures during compile-time or at program initialization. The memory 
for automatic allocation is typically allocated on the stack.
 In languages like C and C++, variables declared within a function or a block are automatically
allocated and deallocated when the scope of the variable ends. 



Dynamic Allocation:
Dynamic allocation, also referred to as runtime allocation or heap allocation, involves allocating 
memory for variables or data structures during runtime or program execution. Dynamic allocation allows
for more flexibility as the size of memory can be determined dynamically based on program needs.
 Memory allocated dynamically is typically managed on the heap and must be explicitly deallocated
 by the programmer to avoid memory leaks.


malloc:
The malloc function is used to allocate a block of memory from the heap during runtime. It stands for 
"memory allocation." It takes the number of bytes as an argument and returns a pointer to the allocated memory.


malloc is used when you need to allocate memory dynamically at runtime in C programming. 
Here are a few reasons why and when you would use malloc:

Variable-sized data structures: When you need to create data structures (like arrays or linked lists)
 whose size is not known beforehand or may vary 
during program execution, you can use malloc. It allows you to allocate memory based on the actual 
needs of your program.

Resource efficiency: malloc helps in efficient utilization of memory resources. 
Instead of allocating a fixed amount of memory for a data structure, you can allocate 
exactly the required amount of memory using malloc. This helps in optimizing memory usage, 
especially when dealing with large or dynamically changing data.

Data persistence: Unlike automatic allocation (stack allocation), which deallocates memory 
automatically when the scope ends, memory allocated using malloc persists until explicitly 
freed with free. This allows you to access the allocated memory even after the function or 
block ends, providing flexibility in managing data across different parts of your program.

Dynamic data input: If you need to read data from a user or a file, and the number of elements 
or the size of the data is not known in advance, you can use malloc. It allows you to allocate 
memory dynamically based on the input data.



Valgrind is a widely used debugging and profiling tool that provides various analysis tools, including memory leak detection. 
Here's how you can use Valgrind to check for memory leaks:

free:
The free function is used to deallocate memory that was previously allocated using malloc or related functions. 
It returns the allocated memory back to the system heap, making it available for future use.
