#include <stdio.h>
#include <string.h>
typedef struct
{
    int dia;
    int mes;
    int anio;

} sFecha;

typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;

}sVehiculo;

typedef struct
{
    int id;
    char nombre[50];
    sFecha fechaNac;


} sPersona;

void harcodearPersonas(sPersona[], int);
void mostrarPersonas(sPersona[], int);
void harcodearVehiculos(sVehiculo[], int);
void mostrarVehiculos(sPersona[], sVehiculo[] ,int);
int buscarPersonaPorId(sPersona[], int, int);
