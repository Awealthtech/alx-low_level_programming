#include "main.h"

/**
 * swap_int - function that swap the value of two integer
 * @a - this is the first entry
 * @b - this is the second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
