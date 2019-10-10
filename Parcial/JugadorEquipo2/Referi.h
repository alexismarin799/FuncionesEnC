#include <stdio.h>
#include <string.h>
#include "Fecha.h"
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int codigo;
    char nombre[31];
    char apellido [31];
    float sexo;
    char eMail[31];
    sFechaNac fechaNac;
    int espacio;

}sReferi;

int inicializarReferi(sReferi*, int);
int buscarReferiLibre(sReferi*, int);
sReferi pedirReferi();
int cargarReferis(sReferi*, int, int);
