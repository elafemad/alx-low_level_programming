#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array
 * Return: o if no num is passed, error is symbol is passed elase return the sum
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("Error\n");
			return (1);
		}
		if ()
		{
			return (0);
		}
	}
	sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
