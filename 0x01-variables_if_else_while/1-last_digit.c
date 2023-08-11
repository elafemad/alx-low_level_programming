#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/*
 * main assign a random num 
 * return 0 successful
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}
