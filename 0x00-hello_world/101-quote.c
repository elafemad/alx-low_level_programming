#include<unistd.h>
/**
 * main - print without using printf and puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, message, sizeof(message)-1);
	return (1);
}
