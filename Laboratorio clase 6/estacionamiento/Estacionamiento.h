#include <stdio.h>
#include <string.h>
#define P 4
#define V 10
#define LIBRE 0
#define OCUPADO 1

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
    //int espacio;


} sPersona;

//int incializarPersonas(sPersona[], int);
void menu(void);
void harcodearPersonas(sPersona[], int);
void mostrarPersonas(sPersona[], int);
void harcodearVehiculos(sVehiculo[], int);
void mostrarVehiculos(sPersona[], sVehiculo[] ,int);
int buscarPersonaPorId(sPersona[], int, int);
void ingresoDuenio(sPersona[], sVehiculo[], int); //FIJATE LA "�" PUTO GENIO
void dueniosYAutos(sPersona[], sVehiculo[],int,int);
void ordenarPorNombreYAnio(sPersona[], int);
void ordenarPorDuenioYPatente(sPersona[],sVehiculo[], int, int);
void mostrarAutoPorDuenio(sPersona[], sVehiculo[], int);
void mostrarVehiculo(sVehiculo[], int);
void cobrarAuto(sVehiculo[],int);
void due�oPagaPorAuto(sPersona[], sVehiculo[], int);
int soloLetras(char[]);
