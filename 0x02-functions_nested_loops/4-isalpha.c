#include "main.h"

/**
* _isalpha-function to check whether c is lowerccas
* @c: is the int that is used for argument
*
* Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
return (0);
}
