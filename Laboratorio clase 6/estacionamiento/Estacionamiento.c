#include "Estacionamiento.h"

void harcodearPersonas(sPersona lista[], int cant)
{

    //int id[]= {1,2,3,4};
    char nombre[][50]= {"Maria", "Ezequiel", "German", "Yanina"};
    int dia[]= {33,22,25,11};
    int mes[]= {3,4,12,11};
    int anio[]= {1990,1980,2000,1995};
    int i;

    for(i = 0; i < cant; i++)
    {
        lista[i].fechaNac.dia = dia[i];
        lista[i].fechaNac.mes = mes[i];
        lista[i].fechaNac.anio = anio[i];
        lista[i].id = i+1;
        strcpy(lista[i].nombre, nombre[i]);

    }

}
void mostrarPersonas(sPersona persona[], int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf("ID: %d -- Nombre: %s -- Fecha de Nacimiento: %d/%d/%d\n", persona[i].id, persona[i].nombre, persona[i].fechaNac.dia, persona[i].fechaNac.mes, persona[i].fechaNac.anio);
    }
}
void mostrarVehiculos(sPersona persona[], sVehiculo vehiculos[], int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf("\n Nombre: %s\n", persona[buscarPersonaPorId(persona,vehiculos[i].idDuenio,cant)].nombre);
        printf("FechaIngreso: %d/%d/%d\n", vehiculos[i].fechaIngreso.dia, vehiculos[i].fechaIngreso.mes, vehiculos[i].fechaIngreso.anio);
        printf("HoraIngreso: %d\n", vehiculos[i].horaIngreso);
        printf("HoraSalida: %d\n", vehiculos[i].horaSalida);
        printf("Patente: %s\n", vehiculos[i].patente);
    }
}

void harcodearVehiculos(sVehiculo vehiculo[], int cant)
{
    char patente[][50]= {"AAA 111", "BBB 222", "AA 111 BB", "DJ 222 BB"};
    int dia[]= {26,26,26,26};
    int mes[]= {9,9,9,9};
    int anio[]= {2019,2019,2019,2019};
    int horaDeIngreso[]= {10,9,8,11};
    int horaDeSalida[]= {11,11,11,12};
    int idDuenio[]= {1,2,2,4};
    int i;

    for(i = 0; i < cant; i++)
    {
        strcpy(vehiculo[i].patente, patente[i]);
        vehiculo[i].fechaIngreso.dia = dia[i];
        vehiculo[i].fechaIngreso.mes = mes[i];
        vehiculo[i].fechaIngreso.anio = anio[i];
        vehiculo[i].horaIngreso = horaDeIngreso[i];
        vehiculo[i].horaSalida = horaDeSalida[i];
        vehiculo[i].idDuenio = idDuenio[i];

    }
}
int buscarPersonaPorId(sPersona persona[], int id, int cant)
{
    int i;
    int retorno;
    for(i = 0; i < cant; i++)
    {
        if(id == persona[i].id)
        {
            retorno = i;
        }
    }
    return retorno;

}
