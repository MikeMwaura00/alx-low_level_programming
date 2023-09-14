#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        write(1, &digit, 1);
        digit++;
    }

    write(1, "\n", 1);
}

