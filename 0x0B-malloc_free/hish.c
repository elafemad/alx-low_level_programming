#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/** 
 * *create_array - function that concatenates two strings.
 * @s1:pointer
 * @s2: pointer
 * Return: null, pointer.
 * */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1,size2;
	char *a;


	if (s1 == NULL)
	{
		s1= "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0';i++)
	{}
	size1 = i;
	for (i = 0; s2[i] != '\0';i++)
	{}
	size2 = i;
	a = malloc((size1 * sizeof(char)) + (size2 * sizeof(char))); 
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}

	a[i] = '\0';
	return (a); 
}
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
