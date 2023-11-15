#include "main.h"
#include <unistd.h>

void char_func(va_list list)
{
	char c;
	c = va_arg(list, int);
	write(1, &c, 1);
}

void str_func(va_list list)
{
	char *string = va_arg(list, char*);
	write(1, str, strlen(str));
}

void print_pnt(va_list list)
{
	write(1, "%", 1);
}
