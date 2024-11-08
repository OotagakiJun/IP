#include<stdio.h>

int adicion(int numero);

int main()
{
	int numero = 0;
	printf("Usuario, ingrese un numero entero: ");
	scanf("%d", &numero);
	printf("La suma de sus digitos es: %d", adicion(numero));
	return 0;
}

int adicion(int numero)
{
	static int suma = 0;
	if (numero != 0)
	{
		suma += numero % 10;
		numero /= 10;
		adicion(numero);
		return suma;
	}
}