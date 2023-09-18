#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
    int len2;
len =  _printf("String:[%s]\n", "I am a string !");
len2 = printf("String:[%s]\n", "I am a string !");
 printf("Length:[%d, %i]\n", len, len2);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

    return(0);
}