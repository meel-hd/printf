#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * -printf - print a formated string
 *  @foramt: formating string
 *  Return: number of char printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	/** Check if format is provided */
	if (format == NULL)
	{
		return (0);
	}
	/** Start pointing the first unkown arg*/
	va_start(ap, format);

	/** Loop the format string*/
	while (*format != '\0')
	{
		/** Check for special format char */
		if (*format == '%')
		{
			/** Point to char after % */
			format++;
			/** Check for char formating */
			if (*format == 'c')
			{
				/** Get value of char to pring */
				char value = va_arg(ap, int);

				printf("%c", value);
				len++;
			}
			/** Check for a string format */
			else if (*format == 's')
			{
				char *value = va_arg(ap, char *);
				int s_len = 0;

				printf("%s", value);
				/** Calculate string to print len */
				while(*value != '\0')
				{
					s_len++;
					value++;
				}
				len += s_len;

			}
			/** Check if only print %*/
			else if (*format == '%')
			{
				printf("%%");
				len++;
			}
		}else {
			printf("%c", *format);
			len++;
		}
		/** move to next char in format and repeat */
		format++;
	}
	/** Get rid of argument point holder */
	va_end(ap);
	return (len);
}
