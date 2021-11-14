#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int counter_ft;
    int counter_printf;

    printf("-- Display specific conversion --\n");

    ft_printf("1. cspdiuxX%\n");
    // printf("2. cspdiuxX%");
    printf("-- Display a string --\n");
    counter_ft = ft_printf("1. Hello, world\n");
    counter_printf = printf("2. Hello, world\n");
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- s flag --\n");
    counter_ft = ft_printf("1. %s\n", "Im a string");
    counter_printf = printf("2. %s\n", "Im a string");
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- i flag --\n");
    counter_ft = ft_printf("1. %i\n", 1);
    counter_printf = printf("2. %i\n", 1);
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- d flag --\n");
    counter_ft = ft_printf("1. %d\n", 1);
    counter_printf = printf("2. %d\n", 1);
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- u flag --\n");
    counter_ft = ft_printf("1. %u\n", -1);
    counter_printf = printf("2. %u\n", -1);
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- x flag --\n");
    counter_ft = ft_printf("1. %x\n", 123);
    counter_printf = printf("2. %x\n", 123);
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    
    printf("-- X flag --\n");
    counter_ft = ft_printf("1. %X\n", 123);
    counter_printf = printf("2. %X\n", 123);
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);

    printf("-- double percent --\n");
    counter_ft = ft_printf("1. %%\n");
    counter_printf = printf("2. %%\n");
    printf("1. %i\n", counter_ft);
    printf("2. %i\n", counter_printf);
}
