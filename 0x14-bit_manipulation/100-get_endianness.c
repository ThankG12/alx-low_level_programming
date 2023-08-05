#include "main.h"

/**
 * get_endianness - checks if a machine is smaller or bigger endian
 * Return: 0 for bigger, 1 for smaller
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
