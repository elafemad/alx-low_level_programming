#include "main.h"
/**
 * mul - multiply 2 int
 * main - entry point
 * @a: integer
 * @b:integer
 * @argc: integer
 * @argv: pointer
 * Return: intger
 */
int mul(int a , int b)
{
	int x = a * b;
	return (x);
}
int main(int argc, char *argv[])
{	
	int a, b;

	mul(a, b);
	printf("Enter the first number %d the second %d", ml(a, b));
}
