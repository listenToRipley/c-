# Structures

This section reviews the variable structures we can use within C++ to organize and manipulate data.

## functions

[Functions](./functions.cpp) repeatable actions that be called more than once.

The type of output from a function should be how the variable name of the function is initiated.

Parameters/arguments that are passed into a function must include the variable type and be placed between the two parentheses.

The values being passed to not have to be per established if different variables.

### void

When you are not outputting any values.

## Classes and Objects

[View example](./class_obj.cpp).

### Object

Code entities with state and behavior. By this definition, almost everything in C++ in an object.

State is the collection of variables to create properties or attributes of an object.

The behavior refers to functions that help us change/update the associated state.

### Class

The blueprint of an object that can be used.

It is important that your set the availability of your class. Meaning you must include `public:` at the top of your class if you want to be able to access each of those pieces, (variables, constructors and functions).

#### Constructor

Special kind of function that all classes need. This will show the initial state of a class. This will appear after the variables as established and use the same name as the class. This is a way to pass your variables as reference into your class.


### How to Use Classes

To create a class you would use the variable name on your type and then create a variable name. You would pass the class name again to create an instance and pass in any associated variables.

To change or access the instance of the class you will use the new variables name with dot notation.
