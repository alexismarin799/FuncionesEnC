#include "Estacionamiento.h"


void menu(void)
{
    sPersona listaDePersonas[P];
    sVehiculo listaDeVehiculos[V];

    int opcion;
    int flagMenu = 0;

    do
    {
        printf("1-Ingresar personas.\n");
        printf("2-Ingresar Autos.\n");
        printf("3-Mostrar personas ordenadas.\n");
        printf("4-Mostrar autos con sus respectivos dueños.\n");
        printf("5-Motrar cantidad de autos de un dueño.\n");
        printf("6-Mostrar cantidad de autos de personas.\n");
        printf("7-Mostrar auto por duenio.\n");
        printf("8-Salir.\n");
        printf("Ingrese una opcion: ");
        scanf("%d", & opcion);

        switch(opcion)
        {
        case 1:
            harcodearPersonas(listaDePersonas,P);
            break;

        case 2:
            harcodearVehiculos(listaDeVehiculos, V);
            break;

        case 3:
            ordenarPorNombreYAnio(listaDePersonas, P);
            mostrarPersonas(listaDePersonas, P);
            break;

        case 4:
            ordenarPorDuenioYPatente(listaDePersonas, listaDeVehiculos, P, V);
            mostrarVehiculos(listaDePersonas,listaDeVehiculos, V);
            break;

        case 5:
            mostrarPersonas(listaDePersonas, P);
            ingresoDuenio(listaDePersonas, listaDeVehiculos, V);
            break;

        case 6:
            dueniosYAutos(listaDePersonas, listaDeVehiculos, P, V);
            break;

        case 7:
            mostrarAutoPorDuenio(listaDePersonas,listaDeVehiculos,V);
            break;

        case 8:
            flagMenu = 1;
            break;

        default:
            printf("ERROR, ingrese una opcion valida\n");
        }
        system("pause");
        system("cls");

    }
    while(flagMenu == 0);
}

void harcodearPersonas(sPersona lista[], int cant)
{

    //int id[]= {1,2,3,4};
    char nombre[][50]= {"Maria", "Ezequiel", "German", "Yanina"};
    int dia[]= {33,22,25,11};
    int mes[]= {3,4,12,11};
    int anio[]= {1990,1980,2000,1995};
    int id[]= {100,101,105,106};
    int i;

    for(i = 0; i < cant; i++)
    {
        lista[i].fechaNac.dia = dia[i];
        lista[i].fechaNac.mes = mes[i];
        lista[i].fechaNac.anio = anio[i];
        lista[i].id = id[i];
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
        printf("\n%s --- %s --- %d/%d/%d --- %d --- %d\n",vehiculos[i].patente, persona[buscarPersonaPorId(persona,vehiculos[i].idDuenio,cant)].nombre,
               vehiculos[i].fechaIngreso.dia, vehiculos[i].fechaIngreso.mes, vehiculos[i].fechaIngreso.anio,
               vehiculos[i].horaIngreso,
               vehiculos[i].horaSalida);
    }
}
void mostrarVehiculo(sVehiculo vehiculo[], int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf("\n%s --- %d/%d/%d --- %d --- %d\n", vehiculo[i].patente,
                                                    vehiculo[i].fechaIngreso.dia,
                                                    vehiculo[i].fechaIngreso.mes,
                                                    vehiculo[i].fechaIngreso.anio,
                                                    vehiculo[i].horaIngreso,
                                                    vehiculo[i].horaSalida);
    }
}

void harcodearVehiculos(sVehiculo vehiculo[], int cant)
{
    char patente[][50]= {"AAA111", "BBB222", "AAA222", "WWW777",
                         "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"
                        };
    int dia= {26};
    int mes= {9};
    int anio= {2019};
    int horaDeIngreso[]= {10,9,8,11,10,11,9,7,7,14};
    int horaDeSalida[]= {11,11,11,12,14,15,12,10,11,17};
    int idDuenio[]= {101,106,100,106,101,101,100,105,106,106};
    int i;

    for(i = 0; i < cant; i++)
    {
        strcpy(vehiculo[i].patente, patente[i]);
        vehiculo[i].fechaIngreso.dia = dia;
        vehiculo[i].fechaIngreso.mes = mes;
        vehiculo[i].fechaIngreso.anio = anio;
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
void ingresoDuenio(sPersona persona[], sVehiculo vehiculo[], int cant)
{
    int i;
    int idDuenio;
    int flag = 0;

    printf("\nIngrese Duenio: \n");
    scanf("%d", & idDuenio);

    for(i = 0; i < cant; i++)
    {

        if(idDuenio == vehiculo[i].idDuenio)
        {
            printf("\n%s\n", vehiculo[i].patente);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("No tenes autos\n.");
    }
}
void dueniosYAutos(sPersona personas[], sVehiculo vehiculos[], int cantPersonas, int cantVehivulos)
{
    int i;
    int j;
    for(i = 0; i < cantPersonas; i ++)
    {
        for(j=0; j< cantVehivulos; j++)
        {
            if(personas[i].id == vehiculos[j].idDuenio)
            {
                printf("\n%s --- %s\n", vehiculos[j].patente, personas[i].nombre);
            }
        }

    }
}

void ordenarPorNombreYAnio(sPersona persona[], int cant)
{
    int i;
    int j;
    sPersona auxPersona;

    for(i = 0; i < cant-1; i ++)
    {
        for(j = i+1; j < cant; j++)
        {

            if(persona[i].fechaNac.anio > persona[j].fechaNac.anio)
            {
                auxPersona = persona[i];
                persona[i] = persona[j];
                persona[j] = auxPersona;
            }
            if(strcmp(persona[i].nombre, persona[j].nombre)>0)
            {
                auxPersona = persona[i];
                persona[i] = persona[j];
                persona[j] = auxPersona;
            }
        }
    }
}
void ordenarPorDuenioYPatente(sPersona persona[], sVehiculo vehiculo[], int cantPer, int cantVehi)
{
    int i;
    int j;
    sPersona auxPersona;
    sVehiculo auxVehiculo;

    for(i = 0; i < cantVehi-1; i ++)
    {
        for(j = i+1; j < cantVehi; j++)
        {
            if(strcmp(vehiculo[i].patente, vehiculo[j].patente)>0)
            {
                auxVehiculo = vehiculo[i];
                vehiculo[i] = vehiculo[j];
                vehiculo[j] = auxVehiculo;
            }

            if(strcmp(persona[buscarPersonaPorId(persona, vehiculo[i].idDuenio, cantPer)].nombre, persona[buscarPersonaPorId(persona, vehiculo[j].idDuenio, cantPer)].nombre)>0)
            {
                auxVehiculo = vehiculo[i];
                vehiculo[i] = vehiculo[j];
                vehiculo[j] = auxVehiculo;
            }

        }
    }

}
void mostrarAutoPorDuenio(sPersona persona[], sVehiculo vehiculo[], int cant)
{
    int i;
    for(i = 0; i < cant; i ++)
    {
        if(persona[i].id == vehiculo[i].idDuenio)
        {
            mostrarVehiculo(vehiculo, cant);
        }
    }

}
