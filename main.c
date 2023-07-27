#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0 always
 */
int main(void)
{
	int count;

	count =  _printf("%s", "JAMES dong\n");
	printf("Number of characters printed: %d\n", count);
	count =  printf("%s", "JAMES dong\n");
	 printf("Number of characters printed: %d\n", count);
	count =  _printf("%c\t%c\n", 'A', 'e');
	 printf("Number of characters printed: %d\n", count);
	count = printf("%c\t%c\n", 'A', 'e');
	printf("Number of characters printed: %d\n", count);
	count = _printf("am strengthened by all means BOOM!\n");
	printf("Number of characters printed: %d\n", count);
	count = printf("am strengthened by all means BOOM!\n");
	printf("Number of characters printed: %d\n", count);
	count = _printf("100%% dogs\n");
	printf("Number of characters printed: %d\n", count);
	count = printf("100%% dogs\n");
	printf("Number of characters printed: %d\n", count);
	count =  _printf("%s", "JAMES dong i like your mother\n");
	printf("Number of characters printed: %d\n", count);
	count =  printf("%s", "JAMES dong i like your mother\n");
	printf("Number of characters printed: %d\n", count);
	_printf("hello your age %d and year %i\n", 33, 1990);
	printf("Number of characters printed: %d\n", count);
	printf("hello your age %d and year %i\n", 33, 1990);
	 printf("Number of characters printed: %d\n", count);
	return (0);
}
