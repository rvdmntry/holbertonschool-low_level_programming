#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, depending on the format
 * @format: a list of types of arguments passed to the function
 * Description: Types are:
 * c: char
 * i: integer
 * f: float
 * s: char* (prints (nil) if string is NULL)
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str, *separator = "";
va_list args;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
rintf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
separator = ", ";
i++;
}
va_end(args);

printf("\n");
}
