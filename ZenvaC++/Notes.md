# C++

A statically types language.

## General

- `//` comments

- `#include <>` import a library. Between the <> add your library name.

- `std::cout` & `std::cin` allow for interaction with the library as  output and input relatively.

`<<` provide output text inside quotations marks after that.

`>>` provides the input inside of a variable type that must be defined before being called. See [types](./Notes.md/#types) of how to do so.

Statements must end with `;`

## Variable

Variables are a named instance of a [type](./Notes.md/#types) the holds data.

Variables must be started before referenced, but the can change throughout their life, but not change the [type](./Notes.md/#types) of state they are. This is what makes C++ a statically typed language.

You do not need to assign a value when you provide the variable, but you do have to specify the type.

### Types

[Type Examples](./types.cpp)

This is a list of the types, the bullets points under each will show how you need to reference it within the code to start using it.

1. Integers - whole number values

- `int`

2. Doubles - numbers with decimal values. Doubles can also use for whole numbers.

- `double`

*There is also floats, but not covered in this tutorial.*

3. Booleans - true or false. The truthy and falsy will be lower case for this language.

- `bool`

4. Strings - text related, can be any value as long as it is contained inside double quotation marks.

- `std::string`

Providing the `std::` will allow the "" string to appear.

*There are also characters type which is not covered in this tutorial*

5. [Pointers](./pointers.cpp), a reference to where a variable is stored in memory.

These are numeric values and can be pulled out a specific variable by using `int * namePtr = &variable`;

The naming convention for pointers in the provide the name of the variable you will be referencing to followed by `Ptr`.

The `*` should not be confused with the multiply operand. This is the assignment reference.

The `&` is the assignment that will provide the output of the address.

To get the value of the assigned pointer, you will *"dereference"* the variable.

You reuse the assignment variable with the original type to pull out the information. See line 10 of the [pointers](./pointers.cpp) doc to see this in action.

This will provide the most up to date value of that variable.

While the location will not change, the location to where the information is called my provide different output is the values change after the call.

### String Build in functions

If you provide the string variable name and add a `.` after, you can see some of the additional methods available on those strings.

### Operators

The most basic of operators is the assignment `=` allows a value to be assigned.

[Examples](./operators.cpp)

#### Arithmetic

- `+`  add
- `-`  subtract
- `*`  multiply
- `/`  divide
-`%`   modulo

You can also provide the short hand when reassign a value by using the arithmetic operation followed by the assignment operation, eg: `-=`.

#### Comparison

Comparison should only be used on the same value type.

- `==` is equal to
- `!=` is not equal to
- `>=` greater than or equal to
- `>`  greater than
- `<=` less than or equal to 
- `<`  greater than or equal to

#### Logical

- `&&` and
- `||` or


## Arrays


