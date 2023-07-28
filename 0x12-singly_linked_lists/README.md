Singly linked lists

What is Data Structure:
A data structure is a storage that is used to store and organize data.
 It is a way of arranging data on a computer so that it can be accessed and updated
 efficiently.
Classification of Data Structure

Linear data structure: Data structure in which data elements are arranged sequentially or 
linearly, where each element is attached to its previous and next adjacent elements,
is called a linear data structure. 
Examples of linear data structures are array, stack, queue, linked list, etc.

Static data structure: Static data structure has a fixed memory size. It is easier to 
access the elements in a static data structure. 
An example of this data structure is an array.

Dynamic data structure: In dynamic data structure, the size is not fixed. It can be randomly 
updated during the runtime which may be considered efficient concerning the memory (space) 
complexity of the code. 
Examples of this data structure are queue, stack, etc.

Non-linear data structure: Data structures where data elements are not placed sequentially 
or linearly are called non-linear data structures. In a non-linear data structure, we can’t 
traverse all the elements in a single run only. 

Examples of non-linear data structures are trees and graphs.
For example, we can store a list of items having the same data-type using the array data 
structure.


Singly Linked List:
In a singly linked list, each node points to the next node in the sequence. It forms a 
unidirectional chain where each node has a link to the next node, and the last node points 
to NULL, indicating the end of the list.
rust
Copy code
Node1 -> Node2 -> Node3 -> ... -> LastNode -> NULL

Doubly Linked List:
In a doubly linked list, each node has two pointers: one points to the next node, and the 
other points to the previous node. This allows navigation in both directions. The first 
node's previous pointer and the last node's next pointer typically point to NULL.
rust
Copy code
NULL <- Node1 <-> Node2 <-> Node3 <-> ... <-> LastNode -> NULL

Circular Linked List:
In a circular linked list, the last 

Singly Circular Linked List:
A singly circular linked list is a combination of a singly linked list and a circular linked 
list. The last node points back to the first node, and each node points to the next node, 
but there is no backward navigation.
rust
Copy code
Node1 -> Node2 -> Node3 -> ... -> LastNode -> Node1

Doubly Circular Linked List:
A doubly circular linked list combines the features of a doubly linked list and a circular 
linked list. Each node points to the next and the previous node, and the last node's next 
pointer points back to the first node, while the first node's previous pointer points to 
the last node.
rust
Copy code
NULL <- LastNode <-> Node1 <-> Node2 <-> Node3 <-> ... <-> LastNode -> NULL
Each type of linked list has its own advantages and use cases. For example, singly linked 
lists are often used when forward traversal is more frequent and memory efficiency is a 
concern. Doubly linked lists are useful when bidirectional traversal is required. Circular 
linked lists can be used in scenarios where you want to create a looped structure, like in
 a queue implementation or scheduling tasks in a circular manner. The choice of which type 
to use depends on 
the specific requirements of the application and the operations you need to perform on the 
data.



