#include "main.h"
/**
*factorial - my function
*@n :my parameter
*Return:factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

