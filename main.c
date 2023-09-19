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
len =  _printf("number:[%d]\n", "28474");
len2 = printf("number:[%d]\n", "28474");
 printf("Length:[%d, %i]\n", len, len2);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

    return(0);
}