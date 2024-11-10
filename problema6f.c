/**
 * @file problema6f.c
 * @date 2024-11-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void burbuja(int arr[]);
void zo(int arr, int flag, int j, int i);

int main()
{
	srand(time(NULL));
	int arr[10000];
	printf("Arreglo: [ ");
	for (int i = 0; i < 10000; i++)
	{
		arr[i] = (rand() % 100000 - 1) + 1;
		printf("%d ", arr[i]);
	}
	printf("]\n");
	burbuja(arr);
	printf("Arreglo ordenado: [ ");
	for (int i = 0; i < 10000; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
	return 0;
}

void burbuja(int arr[])
{
	int flag = 0;
	static int i = 0;
	static int j = 0;
	if (j < 10000 - 1)
	{
		zo(arr, flag, j, i);
		if (flag != 0)
		{
			j++;
			burbuja(arr);
		}
	}
}

void zo(int arr, int flag, int j, int i)
{
	int aux = 0;
	if (i < 10000 - 1 - j)
	{
		if (arr[i] < arr[i + 1])
		{
			aux = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = aux;
			flag = 1;
		}
		i++;
	}
}