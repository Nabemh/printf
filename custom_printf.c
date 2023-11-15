#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Author:
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int c;
	va_list frmt;

	c = 0;

	if (format == NULL)
		return (-1);

	va_start (frmt, format);

	while (*format)
	{
		/* Normal characters */
		if (*format != '%')
		{
			write(1, format, 1);
			c++;
		}
		/* Reaches % */
		else
		{
			format++;
			handle_call(*format, frmt);
			c++;
		}
		format++;
	}

	va_end(frmt);
	return c;

	va_end(frmt);
}
