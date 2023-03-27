#include "main.c"
#include <stdarg.h>

/**
 * -printf - print a formated string
 *  @foramt: formating string
 *  Return: number of char printed
 */
int _printf(const char *format, ...)
{
	va_list ap;

	/** Start pointing the first unkown arg*/
	va_start(ap, format);

	/** Get rid of argument point holder */
	va_end(ap);
	return (0);
}
