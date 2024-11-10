/**
 * @file problema6.c
 * @author Ootagaki Paz Angel Jun-ichi (ootagaki.paz.angeljunichi@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-10
 * 
 * boleta: 2025640199
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void burbuja(int arr[]);

int main()
{
        srand(time(NULL));
        int arr[10000];
        
        printf("Arreglo: [ ");
        for(int i = 0; i < 10000; i++)
        {
                arr[i] = (rand() % 100000 - 1) + 1;
                printf("%d ", arr[i]);
        }
        printf("]\n");

        burbuja(arr);
        printf("\nArreglo ordenado: [ ");
        for(int i = 0; i < 10000; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("]\n");
        return 0;
}

void burbuja(int arr[])
{
    int aux = 0;
    int flag = 0;
    int j = 0;
    if (j < 10000 - 1)
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
        if (flag != 0)
        {
            j++;
            burbuja(arr);
        }
    }
}
