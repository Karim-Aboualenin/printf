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
{'b', print_binary},
{'u', convert_unsigned},
{'o', print_octal},
{'x', print_hexa},
{'X', print_Hexa},
{'S', print_STRING},
{'p', print_pointer},
{'r', print_reverse},
{'R', print_rot_13},
{'\0', NULL}
};
int i = 0;
for (i = 0; specifiers[i].specifier != '\0'; i++)
{
if (specifiers[i].specifier == s)
{
return (specifiers[i].func);
}
}
return (NULL);
}
