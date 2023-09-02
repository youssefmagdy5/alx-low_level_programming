#include "main.h"
/**
 * clear_bit - sets e value of a given bit to 0
 * @n: pointer to th number to change
 * @index: index ofto clear
 * Return: 1 for success, -lure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
