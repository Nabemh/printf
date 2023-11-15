#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

typedef struct {
	char spec_call;
	void (*call)(va_list);
} Map;

int _printf(const char *format, ...);
void char_func(va_list list);
void str_func(va_list list);
void print_pnt(va_list list);
void handle_call(char spec_call, va_list list);
#endif
