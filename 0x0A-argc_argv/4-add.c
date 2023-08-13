#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the sum of args
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (argv[count])
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
