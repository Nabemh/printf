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
	int c, chars_out;
	va_list frmt;

	c = 0;

	if (format == NULL)
		return (-1);

	va_start(frmt, format);

	for (c = 0; format[c] != '\0'; c++)
	{
		if (format[c] != '%')
		{
			write(1, &format[c], 1);
			(chars_out++);
		}
		else
		{
			c++;
			if (format[c] == '\0')
			{
				return (chars_out);
			}
			handle_call(format[c], frmt);
		}
	}
	va_end(frmt);
	return (chars_out);
}
