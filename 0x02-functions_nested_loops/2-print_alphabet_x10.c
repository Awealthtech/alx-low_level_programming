#include "main.h"

/**
* print_alphabet_x10 - function to print abc 1x ten
* 
* Return: 0
*/
void print_alphabet(void)
{
chsr c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
