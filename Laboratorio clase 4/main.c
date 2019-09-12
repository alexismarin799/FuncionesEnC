#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tam = 4;
void cargarDatosEnteros(int[], int tam);
void cargarDatosChar(char[][50], int tam);
int dameElMaximo(int[], int tam);
int dameElIndiceMaximo(int[], int tam);
void mostrarNombreMaximo(char[][50], int[], int tam);


int main()
{
    int edades[tam];
    char nombres [tam][50];
    int i;
    int notaAlta;
    int indiceAlto;

    /*for(i = 0; i < tam; i ++)
    {
        printf("Ingrese su edad: ");
        scanf("%d", & edades[i]);
        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombres[i]);
    }*/
    cargarDatosChar(nombres, tam);
    cargarDatosEnteros(edades, tam);
    notaAlta = dameElMaximo(edades, tam);
    indiceAlto = dameElIndiceMaximo(edades, tam);
    mostrarNombreMaximo(nombres, edades, tam);



    for(i = 0; i < tam; i ++)
    {
        printf( "Usted es %s y su nota es %d. \n", nombres[i], edades[i]);

    }
    printf("La nota mas alta es: %d.\n", notaAlta);
    printf("El indice alto es: %d.", indiceAlto);




    return 0;
}
void cargarDatosEnteros(int myArray[], int tam)
{
    int i;
    int aux[]={4,10,8,2};
    for(i = 0; i < tam; i ++)
    {
        myArray[i] = aux[i];
    }
}
void cargarDatosChar(char myArray[][50], int tam)
{
    int i;
    char aux[][50]={"Alfredo", "Rogelio", "Julieta", "Pablo"};
    for(i = 0; i < tam; i ++)
    {
       strcpy(myArray[i], aux[i]);
    }

}
int dameElMaximo(int myArray[], int tam)
{
    int i;
    int maximo;
    int aux[]={4,10,8,2};

    for(i = 0; i < tam; i ++)
    {
        myArray[i]=aux[i];
        if(myArray[i] > maximo || i == 0)
        {
            maximo = myArray[i];
        }
    }
    return maximo;
}
int dameElIndiceMaximo(int myArray[], int tam)
{
    int i;
    int maximo;
    int maxI;
    int aux[]={4,10,8,2};

    for(i = 0; i < tam; i ++)
    {
        myArray[i]=aux[i];
        if(myArray[i] > maximo || i == 0)
        {
            maximo = myArray[i];
            maxI = i;
        }
    }
    return maxI;
}
void mostrarNombreMaximo(char arrayPalabras[][50], int myArray[], int tam)
{
    int i;
    int indice;
    indice = dameElIndiceMaximo(myArray, tam);

    arrayPalabras[indice];
    printf("El nombre del de la nota mas alta es: %s.\n", arrayPalabras[indice]);

}
