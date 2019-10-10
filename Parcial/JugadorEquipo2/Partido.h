#include <stdio.h>
#include <string.h>
#include "Equipo.h"
#include "Referi.h"
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int codigo;
    sEquipo codigoEquipoVisitante;
    sEquipo codigoEquipoLocal;
    sReferi codigoReferi;
    int espacio;

}sPartido;

int inicializarPartido(sPartido*, int);
int buscarPartidoLibre(sPartido*, int);
sPartido pedirPartido();
int cargarPartido(sPartido*, int, int);

