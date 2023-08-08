#include "main.h"
#include <stdlib.h>
/**
* _strdup - my function
* @str: parameter
* Return: (NULL)
 */
char *_strdup(char *str)
{
char *a;
int i, r = 0;
if (str == NULL)
	return (0);
i = 0;
while (str[i] != '\0')
	i++;
a = malloc(sizeof(char) * (i + 1));
if (a == NULL)
	return (NULL);
for (r = 0; str[r]; r++)
	a[r] = str[r];
return (a);
}
