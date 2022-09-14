#include "main.h"

/**
* print_sign - function to print sign of a number
* @c: is the int that is use for the argument of function
*
* Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
