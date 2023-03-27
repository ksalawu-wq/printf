#include "main.h"

/**
* print_char - prints chars
* @d_types: List of arguments
* @buffer: buffer array to handle print
* @flags: calculates active flags
* @width: width
* @precision: precision
* @size: size
* Return: number of chars
*/

int print_char(va_list d_types, char buffer[],
	int flags, int width, int precision, int size)
{
	char a = va_arg(d-types, int);

	return (handle_write_char(a, buffer, flags, width, precision, size));
}

/**
* print_string - prints a string
* @d_types: list of arguments
* @buffer: buffer to handle array
* @flags: calculates active flags
* @width: get width
* @precision: precision specification
* @size: Size specifier
* Return: No. of char printed
*/

int print_string(va_list d_types, char buffer[],
	int flags, int width, int precision, int size)
[
	int length = 0, i;
	char *str = va_arg(d_types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
	str = "(null)";
	if (precision >= 6)
	str = "      ";
	}

	while (str[length] != '\0')
	length++;

	if (precision >= 0 && precision < length)
	length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
		write(1, str[0], length);
		for(i = width - length; i > 0; i--)
		write(1, " ", 1);
		return (width);
		}
		else
		{
		for (i = width - length; i > 0; i--)
		write (1, " ", 1);
		write (1, &str[0], length);
		return (width);
		}
	}
	return (write(1, str, length));
}

/**
*
*
*
*
*
*
*
*
*/

int print
