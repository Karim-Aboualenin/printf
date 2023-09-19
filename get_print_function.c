#include "main.h"

/**
 * get_print_function - selects the correct function
 * to perform the right print function based on the specifier
 * @s: the operator passed as argument to the program
 * Return: returns a pointer to the function that
 * corresponds to the operator given as a parameter
 */
int (*get_print_function(char s))(va_list)
{
specifiers_t specifiers[] = {
{'c', print_char},
{'s', print_string},
{'i', convert_int},
{'d', convert_int},
{'b', print_binary}
{'\0', NULL}
};
int i = 0;
while (specifiers[i].specifier != '\0')
{
if (specifiers[i].specifier == s)
{
return (specifiers[i].func);
}
i++;
}
return (NULL);
}
