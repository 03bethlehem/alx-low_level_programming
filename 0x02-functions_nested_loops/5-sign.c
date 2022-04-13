#include "main.h"

/**
 * print_sign - Prints the sign of a character.
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less tan zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
}
else
{
_putchar('_');
return (-1);
}
}
