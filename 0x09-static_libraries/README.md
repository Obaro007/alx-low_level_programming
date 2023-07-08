 C - Static libraries

General
What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm



Unix systems (as well as most other modern systems) allow us to create and use two 
kinds of libraries - static libraries and shared (or dynamic) libraries.

Static libraries are just collections of object files that are linked into the program 
during the linking phase of compilation, and are not relevant during runtime.




Shared libraries (also called dynamic libraries) are linked into the program in two stages. First,
 during compile time, the linker verifies that all the symbols 
(again, functions, variables and the like) required by the program, are either
 linked into the program, or in one of its shared libraries.

The basic tool used to create static libraries is a program called 'ar', for 'archiver'.
 This program can be used to create static libraries (which are actually archive files), 
modify object files in the static library, list the names of object files in the library,
and so on. In order to create a static library, we can use a command like this:

ar rc libutil.a util_file.o util_net.o util_math.o

This command creates a static library named 'libutil.a' and puts copies of the object files 
"util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, 
it has the object files added to it, or replaced, if they are newer than those inside the library.
The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to 
replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the 
compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols 
in the library won't matter during compilation (this will be better understood when we take a deeper 
look at the link process at the end of this tutorial). The command used to create or update the index is called
'ranlib', and is invoked as follows:

ranlib libutil.a



The nm command is used to list symbols from object files or libraries. However, the specific usage of nm depends on the system and the type of library you're working with.
