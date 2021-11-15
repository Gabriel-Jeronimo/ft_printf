![header_printf](https://user-images.githubusercontent.com/55462130/141702042-ebd61a9e-cc1b-41d3-8742-509de7a4424b.png)
## Introduction to ft_printf 👋

**ft_printf** is the third project at the programming school, École 42. The versatility of the printf function in C represents a great exercise in programming for
us. This project is of moderate difficulty. It will enable us to discover variadic functions in C.
The key to a successful ft_printf is a well-structured and good extensible code.

## Description
ft_printf is a project that mimics the real printf function.

## Makefile
```all```, ```clean```, ```fclean```, ```re```, ```bonus```
## External functions
```malloc```, ```free```, ```write```, ```va_start```, ```va_arg```, ```va_copy```, ```va_end```

## Mandatory requirements
```%c``` print a single character.

```%s``` print a string of characters.

```%p``` The void * pointer argument is printed in hexadecimal.

```%d``` print a decimal (base 10) number.

```%i``` print an integer in base 10.

```%u``` print an unsigned decimal (base 10) number.

```%x``` print a number in hexadecimal (base 16), with lowercase.

```%X``` print a number in hexadecimal (base 16), with uppercase.

```%%``` print a percent sign.

---

## How to test
1. Clone the repository.
```
git clone https://github.com/Gabriel-Jeronimo/ft_printf.git
```
2. Access the project.
```
cd ft_printf
```
3. Run the makefile.
```
make all
```
4. Run main.c and be happy. 🥳
```
clang -Wall -Werror -Wextra main.c -L. -I. -lftprintf && ./a.out
```
Feel free to test more things in main.c or your projects. 😁 

Please give a star to the repository if you liked this project. :star:

