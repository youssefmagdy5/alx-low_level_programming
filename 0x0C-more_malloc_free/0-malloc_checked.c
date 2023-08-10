#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - allocate ur memory
* @b: f para
*Return: allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
