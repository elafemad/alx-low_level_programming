#include "main.h"
/**
 * words_counter -  count the number of words in  string
 * @s: string to evaluate
 * Return: number of words
 */
int words_counter(char *s)
{
	int flag, c, w;

	w = 0;
	flag = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			w++;
			flag = 1;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string half
 * @str: string to be splited
 * Return: the pointer to an array of strings,
 * or NULL
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int x, len = 0, y = 0, words, c = 0, begin, end;

	while (*(str + len))
		len++;
	words = words_counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < end)
					*temp++ = str[begin++];
				*temp = '\0';
				matrix[y] = temp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
