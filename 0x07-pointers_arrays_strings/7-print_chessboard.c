#include "main.h"
/**
 * _chessboard- function print chessboard.
 * Description: fun prints chess
 * @a:input value
 * Return: void no return,
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i =  0; i <= 8; i++)
	{
		for (j = 0; j < 8; i++)
		{
			printf("a[i][j]%c", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
