#include "main.h"


int i;

static Map function_call[] = {
	{'c', char_func},
	{'s', str_func},
	{'%', print_pnt},
	
	{'\0', NULL}
};

/**
 * handle_call - handles which function is called at the moment
 * @spec_call: specfier being called
 * @list: name of va list
 *
 * Author: Nathan
 * Return: nothing
 */

void handle_call(char spec_call, va_list list)
{
	for (i = 0; function_call[i].spec_call != '\0'; i++)
	{
		if (function_call[i].spec_call == spec_call)
		{
			function_call[i].call(list);
			return;
		}
	}

}
