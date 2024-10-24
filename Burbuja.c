/**
 * @file Burbuja.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-10-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n = 0;
    int aux = 0;
    int cont = 0;

    printf("Usuario, ingrese un numero de muestras: ");
    scanf("%d", &n);
    int arr[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % (300 - 50 + 1)) + 50;
    }

    printf("arreglo: { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                cont++;
                aux = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = aux;
            }   
        }
        if (cont == 0)
        {
            break;
        }
        cont = 0;
    }

    printf("arreglo: { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    return 0;
}