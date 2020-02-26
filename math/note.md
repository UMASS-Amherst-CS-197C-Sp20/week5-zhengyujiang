Header file.
Use quotes "" instead of <> to include the header file. The string inside of the "" is the directory path from current directory to the header file.
Normally we will have #include "header.h", but we could also have "../header.h" or "lib/header.h".

When the compiler meets a function that has not explicit declare or define, it will assume it accept an int as parameter and return an int.

Make can also accept parameters to specify the target.
