#include "main.h"

/**
 * get_print_func - selects the correct function
 * to perform the right print function based on the specifier
 * @s: the operator passed as argument to the program
 * Return: returns a pointer to the function that
 * corresponds to the operator given as a parameter
 */
void (*get_print_func(char s))(va_list)
{
specifiers_t specifiers[] = {
{'c', print_char},
{'s', print_string},
{'\0', NULL}
};
int i = 0;
while (specifiers[i].specifier != '\0')
{
if (specifiers[i].specifier == s)
{
return (specifiers[i].f);
}
i++;
}
return (NULL);
}
