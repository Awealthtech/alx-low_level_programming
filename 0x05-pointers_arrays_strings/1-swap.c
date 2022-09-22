#include "main.h"

/**
 * swap_int - function that swap the value of two integer
 * @a - this is the first entry
 * @b - this is the second entry
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;
/* code to swap b for a */
	change = *a;
	*a = *b;
	*b = change;
}
