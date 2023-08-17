#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - funn
* @n: const var
* Return: sum , 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int i, sum = 0;

va_start(args, n);
	for (i = 0; i <= (int)n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
