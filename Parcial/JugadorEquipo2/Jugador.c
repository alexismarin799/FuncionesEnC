#include "Jugador.h"
int inicializarJugadores(sJugador* jugador, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && jugador != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            jugador[i].espacio = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int buscarJugadorLibre(sJugador* jugador, int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i ++)
    {
        if(jugador[i].espacio == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;
}

sJugador pedirJugador()
{
     sJugador miJugador;

    printf("Ingrese nombre del jugador: \n");
    fflush(stdin);
    gets(miJugador.nombre);
    printf("Ingrese apellido del jugador: \n");
    fflush(stdin);
    gets(miJugador.apellido);
    printf("Igrese codigo de equipo: \n");
    scanf("%d", & miJugador.codigoEquipo.codigo);
    printf("Ingrese sexo del jugador: \n");
    scanf("%f", & miJugador.sexo);
    printf("Ingrese fecha de nacimiento(dia/mes/año): \n");
    scanf("%d %d %d", & miJugador.fechaNac.dia, miJugador.fechaNac.mes, miJugador.fechaNac.anio);

    return miJugador;
}

int cargarJugadores(sJugador* jugador, int cant, int codigo)
{
    int i;
    int retorno = 0;
    i = buscarJugadorLibre(jugador, cant);

    if(i != -1)
    {
        jugador[i] = pedirJugador();
        jugador[i].codigo = codigo;
        jugador[i].espacio = OCUPADO;
        retorno = 1;
    }
    return retorno;
}

void mostrarJugadores(sJugador* jugador, sEquipo* equipo, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf(" %d\t %s\t %s\t %d\t %f\t %d/%d/%d\n", jugador[i].codigo,
                                                        jugador[i].nombre,
                                                         jugador[i].apellido,
                                                          jugador[buscarEquipoLibre(jugador, equipo[i].codigo, cant)].codigoEquipo,
                                                            jugador[i].sexo,
                                                            jugador[i].fechaNac.dia, jugador[i].fechaNac.mes, jugador[i].fechaNac.anio);
    }
}
