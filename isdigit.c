#include "main.h"

/**
 * _isdigit - indicate if c is digit or not
 * @c: character to check
 * Return: 1 if c is diggit and 0 otherwise
 */
int _isdigit(char c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
