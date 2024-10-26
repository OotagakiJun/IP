/**
 * @file 2510.c
 * @author your name (you@domain.com)
 * @brief recursion
 * @version 0.1
 * @date 2024-10-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*
los ciclos consumen mucha memoria a comparacion de una recursion
la recursion es nas lenta que los ciclos
el stack se divide en ambitos
en cada ambito se guardan las variables de cada funcion
si la recursion no ha terminado, en el stack se guarda su "resultado" n(return funcion(n-1))
al terminar el recurse se le pasa el resultado al penultimo y se borra el dato y asi consecutivamente hasta obtener el resultado del primero

el stack depende del OS y es aprox 8Mb
si el stack se termina, el OS mata al programa

start.overflow

HEAP (monticulo de memoria "infinita", le pide al OS)
La RAM tiene acceso dir al OS, el SSD no
para pasar datos del SSD al OS, este debe estar en la RAM. para esto se realiza el swap, intercambia los datos del SSD con memoria "vieja" de la RAM. memoria virtual

*/

//factos
#include<stdio.h>
int main()
{
    
    return 0;
}
