#include <stdio.h>
#include <stdlib.h>
/**
* main - prints sum of 2 no
* @argc :int
* @argv :array
* Return 0-success, non-zero-fail
 */
int main(int argc, char *argv[])
{
	int sum;
	if (argc == 3)
	{
		sum= atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("error\n");
			return (1);
	}
return (0);
}
