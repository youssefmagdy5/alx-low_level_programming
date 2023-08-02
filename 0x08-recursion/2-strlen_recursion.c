#include "main.h"
/**
  *_strlen_recursion - my fuction
  *@s: my parameter
  *Return: 1
*/
int _strlen_recursion(char *s)
{
int l = 0;
	if (*s)
	{
		l++;
	l += _strlen_recursion(s + l);
	}
	return (l);
}
