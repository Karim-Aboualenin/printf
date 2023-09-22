#include "main.h"

/**
 * get_flag - get the flag after %
 * @c: the character after %
 * @flag: the flag
 * Return: 1 if there is flag raised and 0 otherwise
*/
int get_flag(char c, flags_t *flag)
{
if (c == '+')
{
flag->plus = 1;
return (1);
}
if (c == '#')
{
flag->hash = 1;
return (1);
}
if (c == ' ')
{
flag->space = 1;
return (1);
}
return (0);
}
