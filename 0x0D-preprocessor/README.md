0x0D-preprocessor

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are macros and how to use them
What are the most common predefined macros
How to include guard your header files

The C preprocessor modifies a source code file before handing it over to the compiler. You're most likely used to using the preprocessor to include files directly into other files, or #define constants, but the preprocessor can also be used to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.




There are essentially three uses of the preprocessor--directives, constants, and macros. Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. All other uses of the preprocessor involve processing #define'd constants or macros. Typically, constants and macros are written in ALL CAPS to indicate they are special (as we will see).


 Object-like Macros
An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

     #define BUFFER_SIZE 1024
defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

     foo = (char *) malloc (BUFFER_SIZE);
then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written

     foo = (char *) malloc (1024);


 Macro Arguments
Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.


 Standard Predefined Macros
The standard predefined macros are specified by the relevant language standards, so they are available with all compilers that implement those standards. Older compilers may not provide all of them. Their names all start with double underscores.

__FILE__
This macro expands to the name of the current input file, in the form of a C string constant. This is the path by which the preprocessor opened the file, not the short name specified in ‘#include’ or as the input file name argument. For example, "/usr/local/include/myheader.h" is a possible expansion of this macro.

__LINE__
This macro expands to the current input line number, in the form of a decimal integer constant. While we call it a predefined macro, it's a pretty strange macro, since its “definition” changes with each new line of source code.

__DATE__
This macro expands to a string constant that describes the date on which the preprocessor is being run. The string constant contains eleven characters and looks like "Feb 12 1996". 


__TIME__
This macro expands to a string constant that describes the time at which the preprocessor is being run. The string constant contains eight characters and looks like "23:59:01".
If GCC cannot determine the current time, it will emit a warning message (once per compilation) and __TIME__ will expand to "??:??:??".

__STDC__
In normal operation, this macro expands to the constant 1, to signify that this compiler conforms to ISO Standard C. 


__STDC_VERSION__
This macro expands to the C Standard's version number, a long integer constant of the form yyyymmL where yyyy and mm are the year and month of the Standard version. This signifies which version of the C Standard the compiler conforms to. Like __STDC__, this is not necessarily accurate for the entire implementation, unless GNU CPP is being used with GCC.
The value 199409L signifies the 1989 C standard as amended in 1994, which is the current default; the value 199901L signifies the 1999 revision of the C standard. Support for the 1999 revision is not yet complete.

This macro is not defined if the -traditional-cpp option is used, nor when compiling C++ or Objective-C.

__STDC_HOSTED__
This macro is defined, with value 1, if the compiler's target is a hosted environment. A hosted environment has the complete facilities of the standard C library available.
__cplusplus
This macro is defined when the C++ compiler is in use. You can use __cplusplus to test whether a header is compiled by a C compiler or a C++ compiler. This macro is similar to __STDC_VERSION__, in that it expands to a version number. Depending on the language standard selected, the value of the macro is 199711L, as mandated by the 1998 C++ standard; 201103L, per the 2011 C++ standard; an unspecified value strictly larger than 201103L for the experimental languages enabled by -std=c++1y and -std=gnu++1y.
__OBJC__
This macro is defined, with value 1, when the Objective-C compiler is in use. You can use __OBJC__ to test whether a header is compiled by a C compiler or an Objective-C compiler.
__ASSEMBLER__
This macro is defined with value 1 when preprocessing assembly language.
