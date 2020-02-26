main is name of the default target, and have 2 dependency module1.o and module2.o

The dependency could be other target or other file.
In our case module1.o is one target and module2.o is another target.

The module1.o depends on module1.c file and execute the compilation.

The main function will execute the compilation after its dependencies finished.

The good thing is we can make the compilation much easier when compiling large project.
The another good thing is that the dependency tells the proprogram which file needs to be recompile when a change was made.
