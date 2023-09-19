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
len =  _printf("number:[%d]\n", INT_MAX);
len2 = printf("number:[%d]\n", INT_MAX);
len3 =  _printf("number:[%d]\n", INT_MIN);
len4 = printf("number:[%d]\n", INT_MIN);
 printf("Length:[%d, %i]\n", len, len2);
 printf("Length:[%d, %i]\n", len3, len4);
 len =  _printf("number:[%i]\n", INT_MAX);
len2 = printf("number:[%i]\n", INT_MAX);
len3 =  _printf("number:[%i]\n", INT_MIN);
len4 = printf("number:[%i]\n", INT_MIN);
printf("Length:[%d, %i]\n", len, len2);
 printf("Length:[%d, %i]\n", len3, len4);
return(0);
}