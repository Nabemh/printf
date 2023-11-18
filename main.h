#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * typedef struct Map - structure operation
 * @spec_call: Specifier called
 * @call: pointer to function called
 *
 * Description: This structure is used to define
 * mapping to corresponding functions
 */

typedef struct
{
	char spec_call;
	void (*call)(va_list);
} Map;

int _printf(const char *format, ...);
void char_func(va_list list);
void str_func(va_list list);
void handle_d(va_list list);
void handle_i(va_list list);
void print_pnt();
ssize_t _write(int file_des, const void *buff, size_t count);
void handle_call(char spec_call, va_list list);
#endif
