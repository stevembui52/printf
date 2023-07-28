#include "main.h"
/**
 * _strlen - checks the length of the string.
 * @str:string to be checked.
 * Return:length of the string.
 */
int _strlen(char *str)
{
	int ct;

	ct = 0;
	while (*str != '\0')
	{
		ct++;
		str++;
	}
	return (ct);
}
/**
 * print_str - prints a string to the stdoutput
 * @str:string to be printed
 * Return:number of charactes in the string
 */
int print_str(char *str)
{
	return (write(1, str, _strlen(str)));
}
