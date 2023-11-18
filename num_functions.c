#include "main.h"

/**
 * handle_d - Handles %d specifier
 * @list: va_list containing the arguments
 *
 */

void handle_d(va_list list)
{
	int d, len;
	char a[20];

	d = va_arg(list, int);
	
	if (d < 0)
	{
		write(1, "-", 1);
		d = -d;
	}

	len = 0;

	if (d == 0)
	{
		a[len++] = 'O';
	}
	else 
	{
		while (d > 0)
		{
			a[len++] = '0' + d % 10;
			d /= 10;
		}
	}

	while (len > 0)
	{
		write(1, &a[--len], 1);
	}
}

/**
 * handle_i - handles the %i specifier
 * @list: va_list containinf=g the arguments
 *
 */

void handle_i(va_list list)
{
	int d, len;
	char a[20];

	len = 0;
	
	d = va_arg(list, int);

	if (d < 0)
	{
		write(1, "-", 1);
		d = -d;
	}

	while ( d > 0)
	{
		a[len++] = '0' + d % 10;
		d /= 10;
	}

	if (len == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		while (len > 0)
		{
			write(1, &a[--len], 1);
		}
	}
}
