#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array
 * Return: o if no num is passed, error, elase return the sum
 */
int main(int argc, char *argv[])
{
	int a;

	/**(void)argc;*/
	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
