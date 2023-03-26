#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 *
 * @s: string param
 *
 * Return: pointer to char
 */
char *rev_string(char *s)
{
	int x, y;
	char tmp;
	char *dest;

	for (x = 0; s[x] != '\0'; x++)
	{}

	dest = malloc(sizeof(char) * x + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, x);
	for (y = 0; y < x; y++, x--)
	{
		tmp = dest[x - 1];
		dest[x - 1] = dest[y];
		dest[y] = tmp;
	}
	return (dest);
}

/**
 * write_base - chars written to stdout
 *
 * @str: pointer string
 *
 * Return: void
 */
void write_base(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_write_char(str[x]);
}

/**
 * base_len - calculate length for an octal number
 *
 * @num: number calculated
 * @base: base to be calculated by
 *
 * Return: number of product
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int x;

	for (x = 0; num > 0; x++)
	{
		num = num / base;
	}
	return (x);
}

/**
 * _memcpy - copy memory area
 *
 * @dest: copy destination
 * @src: copy source
 * @n: number of bytes
 *
 * Return: pointer of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
