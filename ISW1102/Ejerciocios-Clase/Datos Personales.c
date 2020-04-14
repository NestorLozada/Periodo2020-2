/******************************************************************************

Realizar un programa que permita ingresar por teclado el nombre, apellido 
y edad de una persoan e imprima los datos 

*******************************************************************************/
#include <stdio.h>

void main()
{
    char nombre [10],apellido [10], hobbies [20];
    int edad;
    printf ("Ingrese su nombre: ");
    scanf ("%s", nombre);
    printf ("Ingrese su apellido: ");
    scanf ("%s", apellido);
    printf ("Ingrese su edad: ");
    scanf ("%i",&edad);
    printf ("Ponga sus hobbies: ");
    scanf ("%s", hobbies);
    printf("**********\n");
    printf ("Bibliografia\n");
    printf("**********\n");
    printf ("Su nombre es: %s \n", nombre);
    printf ("Su apellido es: %s \n", apellido);
    printf ("Su edad es: %i \n",edad);
    printf ("Sus hobies son: %s \n", hobbies);
}




