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
  int len3;
  int len4;
len = _printf("%% 532");
len2 = printf("%% 532");
len3 = _printf("string:[%s]\n", "hello, from another world");
len4 = printf("string:[%s]\n", "hello, from another world");
 printf("Length:[%d, %i]\n", len, len2);
 printf("Length:[%d, %i]\n", len3, len4);
return(0);
}