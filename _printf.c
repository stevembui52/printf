#include "main.h"
/**
 * _printf - prints a formatted sting and returns number of characters printed
 * @format:the format string
 * Return:number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	va_start(ap, format);
	count = 0;
	if (format == NULL)
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			count++;
		}
		if (*format == '%')
		{
			write(1, format, 1);
			count++;
		}
		if (*format == 'c')
		{
			print_chr(va_arg(ap, int));
			count++;
		}
		if (*format == 's')
		{
			print_str(va_arg(ap, char *));
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}


