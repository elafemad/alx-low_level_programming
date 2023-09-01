#include "main.h"
/**
 * main - entry point
 * @argc: integer
 * @argv: pointer
 * Return: intger
 */
int main(int argc, char *argv[])
{
	int a = 0;

	/**(void)argc;*/
	while(a < argc)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
