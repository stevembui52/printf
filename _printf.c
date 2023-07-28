#include "main.h"
/**
 * _printf - prints a formatted sting and returns number of characters printed
 * @format:the format string.
 * Return:number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			count += print_chr('%');
			else if (*format == 'c')
			{
				count += print_chr(va_arg(ap, int));
			}
			else if (*format == 's')
			{
				count += print_str(va_arg(ap, char*));
			} else if (*format == 'i' || *format == 'd')
				count += print_int((long)va_arg(ap, int));
		}
		format++;
	}
	va_end(ap);
	return (count);
}
