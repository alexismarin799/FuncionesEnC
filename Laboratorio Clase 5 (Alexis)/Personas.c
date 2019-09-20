#include "Personas.h"
void inicializarPersonas(sAlumno lista[], int cant)
{
    int i;
    for(i = 0; i < cant; i ++)
    {
        lista[i].estaVacio = 1;
    }
}

void pedirAlumno(sAlumno persona[], int indice, int cant)
{
    printf("Ingrese DNI: \n");
    int auxDni;
    scanf("%d", & auxDni);
    while(validarDni(persona, auxDni, cant) == 1)
    {
        printf("Ya existe el DNI, ingrese otro: \n");
        scanf("%d", & auxDni);

    }
    persona[indice].dni = auxDni;
    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(persona[indice].nombre);
    printf("Ingrese pellido: \n");
    fflush(stdin);
    gets(persona[indice].apellido);

    persona[indice].estaVacio = 0;

}
void mostrarAlumno(sAlumno miAlumno)
{
    printf("\n Apellido: %s\nNombre: %s\nDNI: %d\n", miAlumno.apellido, miAlumno.nombre, miAlumno.dni);

}
void cargarAlumnos(sAlumno lista[], int cant)
{
    int i;
    int flagEncontro = 0;
    for(i = 0; i < cant; i++)
    {
        if(lista[i].estaVacio == 1)
        {
            pedirAlumno(lista, i, cant);
            flagEncontro = 1;
            break;

        }
    }
    if(flagEncontro == 0)
    {
        printf("\nNo hay mas espacio\n.");
    }
}
void mostrarListadoDeAlumnos(sAlumno lista[], int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        if(lista[i].estaVacio == 0)
        {
           mostrarAlumno(lista[i]);
        }
    }
}
int validarDni(sAlumno lista[], int dni, int cant)
{
    int i;
    int salida = 0;
    for(i = 0; i < cant; i++)
    {
        if(lista[i].estaVacio == 0 && lista[i].dni == dni)
        {
            salida = 1;
        }
    }
    return salida;
}
