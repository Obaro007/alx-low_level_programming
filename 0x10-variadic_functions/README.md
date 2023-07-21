Variadic Functions
ISO C defines a syntax for declaring a function to take a variable number or type of arguments.
 (Such functions are referred to as varargs functions or variadic functions.) However,
 the language itself provides no mechanism for such functions to access their non-required arguments;
 instead, you use the variable arguments macros defined in stdarg.h.




stdarg.h is a header in the C standard library of the C programming language that
 allows functions to accept an indefinite number of arguments....

[200~The most commonly used macros and functions from stdarg.h are:

va_start: This macro initializes the va_list data type to point to the first variable argument. It is typically
 called at the beginning of the function that takes variable arguments.

va_arg: This macro retrieves the next argument from the va_list and returns it with the type specified.
 Each time va_arg is called, it advances the va_list to the next argument.

va_end: This macro performs the necessary clean-up after using the va_list. It should be called at the end of the function that uses variable arguments.

va_copy: This macro copies the va_list to another variable, which can be used as an independent copy of the original list.
