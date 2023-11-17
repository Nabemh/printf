#include "main.h"

/**
 * char_func - prints a char
 * @list: va list
 *
 */
void char_func(va_list list)
{
	char c = va_arg(list, int);

	write(1, &c, 1);
}

/**
 * str_func - prints a string
 * @list: va list
 *
 */

void str_func(va_list list)
{
	char *string = va_arg(list, char*);

	write(1, string, strlen(string));
}

/**
 * print_pnt - prints the percent sign
 * @list: va list
 *
 */

void print_pnt()
{
	write(1, "%", 1);
}
