#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int[], int cantidad);
int dameElMaximo(int [], int cantidad);
void inicializarArray(int [], int cantidad);
void cargaSecuencialDelArray(int [], int cantidad, char []);
float dameElPromedio(int [], int cantidad);
void ordenamientoDeMyArray(int [], int cantidad);
//MANIPULACION DE DATOS

int main()
{



    int listadoDeEdades [6];
    int edadMayor;
    float resivoPromedio;


    inicializarArray(listadoDeEdades, 6);

    cargaSecuencialDelArray(listadoDeEdades, 6, "Ingrese edad: ");
    mostrarArray(listadoDeEdades, 6);
    edadMayor = dameElMaximo(listadoDeEdades, 6);
    resivoPromedio = dameElPromedio(listadoDeEdades, 6);
    ordenamientoDeMyArray(listadoDeEdades, 6);
    mostrarArray(listadoDeEdades, 6);
    printf("\nEl maximo es: %d ", edadMayor);
    printf("\nEl promedio es: %f ", resivoPromedio);



    /*int i;

    //es una direccion NO una variable, [3] cantidad de elementos, cantidad o constante.
    //numero = 33;
    //listadoDeNumeros[0] = 66;


    for(i = 0; i < 10; i ++) //mostrar array
    {
        printf("Ingresar edad: ");
        scanf("%d", & listadoDeEdades[i]);
    }

    //se usa para mostrar SIEMPRE (va mas abajo).
    for(i = 0; i < 10; i ++)
    {
        printf("\nEdades ingresadas: %d", listadoDeEdades[i]);
    }*/


    return 0;

}

void mostrarArray(int myArray[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i ++) //mostrar array
    {
        printf("\n%d", myArray[i]);
    }
}
int dameElMaximo(int myArray[], int cantidad) //cambio signo para el minimo.
{
    int i;
    int maximo;
    for(i = 0; i < cantidad; i ++) //mostrar array
    {
        if(myArray[i] > maximo || i == 0)
        {
            maximo = myArray[i];
        }
    }
    return maximo;
}
void inicializarArray(int myArray[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i ++) //mostrar array
    {
        myArray[i] = 0;
    }
}
void cargaSecuencialDelArray(int myArray[], int cantidad, char mensaje[])
{
    int i;
    for(i = 0; i < cantidad; i ++)
    {
        printf(mensaje);
        scanf("%d", &myArray[i]);

    }
}
float dameElPromedio(int myArray[], int cantidad)
{
    int i;
    float promedio = 0;
    for(i = 0; i < cantidad; i ++)
    {
        promedio = promedio + myArray[i];
    }
    promedio = promedio / cantidad;
    return promedio;
}
void ordenamientoDeMyArray(int myArray[], int cantidad)
{
    int i;
    int j;
    int aux;
    for( i = 0; i < cantidad; i++)
    {
        for(j = i + 1; j < cantidad; j ++)
        {
            if(myArray[i] < myArray[j])
            {
                aux = myArray[i]; //myArray uno se guarda en aux
                myArray[i] = myArray[j]; //my array j se guarda en myArray i
                myArray[j] = aux; //el aux (myArray[i]) se guarda en myArray j
            }
        }
    }
}
