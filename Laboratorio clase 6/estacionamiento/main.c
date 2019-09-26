#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estacionamiento.h"
#define A 4




int main()
{
    sPersona listaDePersonas[A];
    sVehiculo listaDeVehiculos[A];
    harcodearPersonas(listaDePersonas,A);
    harcodearVehiculos(listaDeVehiculos, A);
    mostrarPersonas(listaDePersonas, A);
    mostrarVehiculos(listaDePersonas,listaDeVehiculos, A);
    printf("\n Estacionamiento!!|n");

    return 0;
}

