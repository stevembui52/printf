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
	if (format == NULL)
	{
		return (-1);
	}
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count++;
		}
		if (*format == '%')
		{
			print_chr('%');
			count++;
		}
		else if (*format == 'c')
		{
			print_chr(va_arg(ap, int));
			count++;
		}
		else if (*format == 's')
		{
			print_str(va_arg(ap, char *));
			count++;
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	return (count);
	va_end(ap);
}


