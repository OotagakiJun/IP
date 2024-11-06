#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void randomV(int n, int arr[]);
void burbujazo(int n, int arr[]);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	
	randomV(n, arr);
	burbujazo(n, arr);
	
	return 0;
}

void randomV(int n, int arr[])
{
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	printf("[ ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

void burbujazo(int n, int arr[])
{
	int cont = 0;
	int aux = 0;
	for(int i = 0; i <n-1; i++)
	{
		for(int j = 0; j<n-1-i; j++)
		{
			cont++;
			if(arr[j]<arr[j+1])
			{
			aux = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = aux;
			}
		}
		cont = 0;
	}
	printf("[ ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
}