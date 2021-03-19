# libasm
### Libasm 42 project
A basic project to familiarize ourselves with the beautiful (and painful) world of assembly language (will be helpful later).

----------------------

### Usage

You can compile the library with a simple `make`
It will create a `libasm.a` binary which contains the following functions :
- [ft_read](srcs/ft_read.s)
- [ft_write](srcs/ft_write.s)
- [ft_strlen](srcs/ft_strlen.s)
- [ft_strcmp](srcs/ft_strcmp.s)
- [ft_strcpy](srcs/ft_strcpy.s)
- [ft_strdup](srcs/ft_strdup.s)

You can also use `make test` to link the library with the [test.c](test.c) to test the previously listed functions.