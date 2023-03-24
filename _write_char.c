#include "main.h"

/**
 * _write_char - writes chars to output
 *
 * @c: variable
 *
 * Return: 1 - success; -1 - error
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
