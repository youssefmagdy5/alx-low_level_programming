#include "main.h"
/**
 * set_bit - sets a bitn index to 1
 * @n: pomber to change
 * @index: index of theto 1
 *
 * Return: 1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
