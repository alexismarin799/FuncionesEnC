#include "Partido.h"

int inicializarPartido(sPartido* partido, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && partido != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            partido[i].espacio = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int buscarPartidoLibre(sPartido* partido, int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i ++)
    {
        if(partido[i].espacio == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;
}

sPartido pedirPartido()
{
     sPartido miPartido;

    printf("Ingrese codigo del equipo visitante: \n");
    scanf("%d", & miPartido.codigoEquipoVisitante.codigo);
    printf("Ingrese codigo del equipo local: \n");
    scanf("%d", & miPartido.codigoEquipoLocal.codigo);
    printf("Ingrese codigo del referi: \n");
    scanf("%d", & miPartido.codigoReferi.codigo);


    return miPartido;
}

int cargarPartido(sPartido* partido, int cant, int codigoPartido)
{
    int i;
    int retorno = 0;
    i = buscarPartidoLibre(partido, cant);

    if(i != -1)
    {
        partido[i] = pedirPartido();
        partido[i].codigo = codigoPartido;
        partido[i].espacio = OCUPADO;
        retorno = 1;
    }
    return retorno;
}

void mostrarEquipos(sEquipo* equipo, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf(" %d\t %d\t %d\t %d\t", equipo[i].codigo, equipo[i].nombre, equipo[i].localidad);
    }
}
