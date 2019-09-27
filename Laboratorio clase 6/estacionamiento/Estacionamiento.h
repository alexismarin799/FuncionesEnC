#include <stdio.h>
#include <string.h>
#define P 4
#define V 10

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

void menu(void);
void harcodearPersonas(sPersona[], int);
void mostrarPersonas(sPersona[], int);
void harcodearVehiculos(sVehiculo[], int);
void mostrarVehiculos(sPersona[], sVehiculo[] ,int);
int buscarPersonaPorId(sPersona[], int, int);
void ingresoDuenio(sPersona[], sVehiculo[], int); //FIJATE LA "Ñ" PUTO GENIO
void dueniosYAutos(sPersona[], sVehiculo[],int,int);
