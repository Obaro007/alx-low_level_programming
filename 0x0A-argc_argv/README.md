
0x0A. C - argc, argv

The declaration of main looks like this:

int main(int argc, char *argv[]);
This indicates that main is a function returning an integer. In hosted environments such as DOS or UNIX, 
this value or exit status is passed back to the command line interpreter. Under UNIX, for example, the 
exit status is used to indicate that a program completed successfully (a zero value) or some error occurred
 (a non-zero value). The Standard has adopted this convention; exit(0) is used to return ‘success’ to its host environment, 
any other value is used to indicate failure. If the host environment itself uses a different numbering convention, exit will 
do the necessary translation. Since the translation is implementation-defined, it is now considered better practice to use
 the values defined in <stdlib.h>: EXIT_SUCCESS and EXIT_FAILURE.

There are at least two arguments to main: argc and argv. The first of these is a count of the arguments supplied to 
the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) 
‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter
 or job control language.

The declaration of the argv argument is often a novice programmer's first encounter with pointers to arrays of 
pointers and can prove intimidating. However, it is really quite simple to understand. Since argv is used to refer
 to an array of strings, its declaration will look like this:

char *argv[]
Remember too that when it is passed to a function, the name of an array is converted to the address of 
its first element. This means that we can also declare argv as char **argv; the two declarations are
 equivalent in this context.
