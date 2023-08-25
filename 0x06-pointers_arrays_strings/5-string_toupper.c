#include "main.h"
/**
 * *string_toupper- function that change lower to upper.
 * Description: function lower to upper.
 * @src:input.
 * Return: pointer.
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
