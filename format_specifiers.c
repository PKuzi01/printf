#include "main.h"

/**
 * print_char - prints char
 *
 * @list: arguments param
 *
 * Return: number of chars
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints string
 *
 * @list: argument param
 *
 * Return: number of chars
 */
int print_string(va_list list)
{
	int x;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
		_write_char(str[x]);
	return (x);
}

/**
 * print_percent - prints percent symbol
 *
 * @list: argument param
 *
 * Return: number of chars
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer - print interger
 *
 * @list: argument param
 *
 * Return: number of chars
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_integer - print unsigned integer
 *
 * @list: argument param
 *
 * Return: total amount
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
