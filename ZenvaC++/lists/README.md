# List Types and Information

## Arrays

[Arrays](./arrays.cpp) are lists of values of a single type. 

They are immutable, you cannot change the array as a whole. Elements can't removed or add new elements to an array. 

Arrays are established as specific type, with a variable name and then include a `[]` set after the variable name to show it is an array. 

The contents of an array will be included inside of `{}`, separated by a comma.  

Each individual item in an array is an "element". To access an element, you can use the index of the item. Arrays in C++ start a 0.

You will place the index next to the variable name with a [] and the index element.

While as a whole arrays are immutable, you can update an existing index.

An alternative syntax to create basically a placeholder array. You do have to know how many elements their will be since you have to have established indexes to be able to update to. Provide the number between the []

## Vectors

[Vectors](./vectors.cpp) are very similar to arrays, but are mutable. 

There are a number of built in functions that will allow use to change them. 

These do come from a library, so much be imported.

The set up will be `std::vector<type> variableName`. You will establish the variable then access it. 

The functionality now will be very similar to arrays in other languages.
