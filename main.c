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
len1 = _printf("Let's try to printf a simple sentence.\n");
len2 = _printf("Character:[%c]\n", 'H');
 printf("Length:[%d, %i]\n", len1, len2);
 printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
    return(0);
}