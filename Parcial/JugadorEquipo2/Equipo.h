#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int codigo;
    char nombre[51];
    char localidad[33];
    int espacio;

}sEquipo;

int inicializarEquipos(sEquipo*, int);
int buscarEquipoLibre(sEquipo*, int);
sEquipo pedirEquipo();
int cargarEquipos(sEquipo*, int, int);
