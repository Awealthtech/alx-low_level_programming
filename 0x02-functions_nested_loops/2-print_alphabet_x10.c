#include "main.h"

/**
 * main - ffunction print_alphabet_x10
* Description: the code prints alphabet_x10
*
* Return:0
*/
void print_alphabet(void)
{
char c, i;

for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
