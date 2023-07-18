Structures, typedef

structures
In C programming, structures (also known as structs) are composite data types that allow 
you to group different variables of different data types under a single name. Structures 
provide a way to create user-defined data types that represent a collection of related 
data items.

The syntax for defining a structure in C is as follows:

c
Copy code
struct structure_name {
    data_type member1;
    data_type member2;
    // ...
    data_type memberN;
};

Pointers to Structures
You can use pointers to structures to manipulate dynamically allocated data:


struct struct_name *ptr;
ptr = (struct struct_name *)malloc(sizeof(struct struct_name));


typedef
The C programming language provides a
keyword called typedef, which you can use to
give a type, a new name.
In C programming, typedef is a keyword used to create new data type names as aliases for 
existing data types. When used with structures, it allows you to define a new name 
(alias) for a struct data type, making the code more readable and providing a level of 
abstraction. Typedef is particularly useful when dealing with complex data structures.

Let's see how typedef is used with structures:

Example with typedef:
c
Copy code
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;

    printf("Name: %s, Age: %d\n", person1.name, person1.age);

    return 0;
}
