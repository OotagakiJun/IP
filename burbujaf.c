#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void randomV(int n, int arr[]);

int main()
{
	int n = 0; 
	int aux = 0;
	int cont = 0; 
	printf (" Usuario , ingrese un numero de muestras : ") ;
	scanf (" %d", & n ) ;
	int arr[n];
	
	randomV(n, arr[]);
	
	return 0;
}

void randomV(int n, int arr[])
{
	srand ( time ( NULL ) ) ;
	for (int i = 0; i < n ; i ++)
	{
		arr [ i ] = ( rand () % (300 - 50 + 1) ) + 50;
	 } 
	 printf (" arreglo generado : { ") ;
	 for (int i = 0; i < n ; i ++)
	 {
	 	printf (" %d ", arr[ i ]) ;
	 }
	 printf ("}\n") ;
}