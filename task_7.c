#include "main.h"

/**
 * 
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
