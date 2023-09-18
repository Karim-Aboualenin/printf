#include "main.h"
/**
 * get_flag - calc falgs
 * @format: ...
 * @i: ...
 * return: flag
*/

int get_flag(const char *format, int *i)
{
int j, curr_;
int flags = 0;
const char FLAGSCH[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAGSARR [] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
for (curr_ = *i + 1; format[curr_] != '\0'; curr_++)
{
for (j = 0; FLAGSCH[j] != '\0'; j++)
if (format[curr_] == FLAGSCH[j])
{
flags | FLAGSARR[j];
break;
}
if (FLAGSCH[j] == 0)
break;
}
*i = curr_ - 1;
return (flags);
}
