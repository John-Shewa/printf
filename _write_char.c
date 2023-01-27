#include "main.h"
/**
 * _write_char.c - writes the character c to stdout
 * @c: is character to print
 * Return: -1 if error, 1 if success
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
