#include <stdio.h>
#include <string.h>
#include "Fecha.h"
#include "Equipo.h"
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int codigo;
    char nombre[51];
    char apellido [51];
    sEquipo codigoEquipo;
    float sexo;
    sFechaNac fechaNac;
    int espacio;

}sJugador;

int inicializarJugadores(sJugador*, int);
int buscarJugadorLibre(sJugador*, int);
sJugador pedirJugador();
int cargarJugadores(sJugador*, int, int);
