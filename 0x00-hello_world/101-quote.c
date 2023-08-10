#include<unistd.h>
/**
 * main - print without using printf and puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, h, sizeof(h) - 1);
	return (1);
}
