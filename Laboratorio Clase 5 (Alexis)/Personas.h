#include <stdio.h>

typedef struct
{
    char nombre[50];
    char apellido[50];
    int dni;
    int estaVacio;

}sAlumno;

void pedirAlumno(sAlumno[], int, int);
void inicializarPersonas(sAlumno[], int);
void mostrarAlumno(sAlumno);
void cargarAlumnos(sAlumno[], int);
void mostrarListadoDeAlumnos(sAlumno[], int);
int validarDni(sAlumno[], int, int);
