/**
 * @file problema6.c
 * @date 2024-11-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int arr[10000];
	int aux = 0;
	int flag = 0; 
	for(int i = 0; i < 10000; i++)
	{
		arr[i] = (rand() % 100000 - 1) + 1;
	}

	for(int j = 0; j < 10000 - 1; j++)
	{
		for(int i = 0; i < 10000 - 1 - j; i++)
		{
			if(arr[i] < arr[i + 1])
			{
				aux = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = aux;
				flag = 1;
			}
		}
		if(flag == 0) break;
		else flag = 0;
	}
	return 0;
}
