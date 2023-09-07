#include "main.h"
/**
 * is_num - checks if string contains a non-number char
 * @s: the string to be tested
 * Return: 0 or 1
 */
int is_num(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of string
 * @s: the string to tested
 * Return: the length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two numbers
 * @argv: the array of arguments
 * @argc: the number of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int len1, len2, len, x, temp, num1, num2, *result, a = 0;
	char *str1, *str2;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_num(str1) || !is_num(str2))
		errors();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		result[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		temp = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			temp += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = temp % 10;
			temp /= 10;
		}
		if (temp > 0)
			result[len1 + len2 + 1] += temp;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
