#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0 always
 */
int main(void)
{
	int a, b;

	a = _printf("Hi %s %c 0%%\n", "john", 'A');
	b = printf("Hi %s %c 0%%\n", "john", 'A');
	printf("chars printed is %d\n %d\n", a, b);
	return (0);
}

