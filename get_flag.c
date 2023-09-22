#include "main.h"

/**
 * get_width - get the width
 * @format: the list of characters
 * i: the index
 * @flag: the flag
 * Return: nothing
*/
void get_width(const char *format, int *i, flags_t *flag)
{
while (format[*i] != '0')
{
if (_isdigit(format[*i]))
{
flag->width *= 10;
flag->width += format[*i] - '0';
}
else
break;
(*i)++;
}
(*i)--;
}
/**
 * get_flag - get the flag after %
 * @format: the list of characters
 * i: the index
 * @flag: the flag
 * Return: 1 if there is flag raised and 0 otherwise
*/
int get_flag(const char *format, int *i, flags_t *flag)
{
if (format[*i] == '+')
{
flag->plus = 1;
return (1);
}
if (format[*i] == '#')
{
flag->hash = 1;
return (1);
}
if (format[*i] == ' ')
{
flag->space = 1;
return (1);
}
if (format[*i] == 'l')
{
flag->l = 1;
return (1);
}
if (format[*i] == 'h')
{
flag->h = 1;
return (1);
}
if (_isdigit(format[*i]))
{
get_width(format, i, flag);
return (1);
}
return (0);
}
