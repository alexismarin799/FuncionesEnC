#include <stdio.h>
#include <stdlib.h>
#include "Personas.h"
#define A 2


int main()
{
    sAlumno listaAlumno[A];
    inicializarPersonas(listaAlumno, A);
    int opcion;
    float flag = 0;
    while(flag == 0)
    {


        printf("1-Ingresar personas. \n");
        printf("2-Mostrar personas ingresadas. \n");
        printf("8-Salir.\n");
        printf("Elija una opcion: ");
        scanf("%d", & opcion);

        switch(opcion)
        {
        case 1:
            cargarAlumnos(listaAlumno, A);
            break;

        case 2:
            mostrarListadoDeAlumnos(listaAlumno, A);
            break;

        case 8:
            flag = 1;
            break;


        }
        system("pause");
        system("cls");


    }

    return 0;
}

