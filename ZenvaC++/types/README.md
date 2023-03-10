# Types

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