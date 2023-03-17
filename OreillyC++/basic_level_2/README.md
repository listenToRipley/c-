# Basics of C ++  - Level 2

## Functions

[Functions](./functions.cpp) allow for reusable code.

For parameters to a function you need to provide the type and the name that you will use for the parameter.

Return will exit from the function.

While void is considered a function without a type, that does not mean it will not return anything.

Always consider the scope of your variables that are being used.

## Namespaces

They are keywords that link a specific library together. This also helps naming collisions.

You can create your own namespace with built in functionality.

If you add `using namespace theCurrentNamespace`, then you will not need to provide the "namespace::" to access the associated namespace.

Best practice is to only use the `using namespace` on common libraries, but personal built one. Again, this is to prevent naming collisions.
