#include "main.h"
#include <unistd.h>

/**
* more_numbers - Prints numbers from 0 to 14, each repeated 10 times, followed by a new line.
*/
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j > 9)
            {
                _putchar('0' + j / 10);
            }
            _putchar('0' + j % 10);
        }
        _putchar('\n');
    }
}

