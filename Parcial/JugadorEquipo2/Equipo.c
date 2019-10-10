#include "Equipo.h"

int inicializarEquipos(sEquipo* equipo, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && equipo != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            equipo[i].espacio = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int buscarEquipoLibre(sEquipo* equipo, int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i ++)
    {
        if(equipo[i].espacio == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;
}

sEquipo pedirEquipo()
{
     sEquipo miEquipo;

    printf("Ingrese nombre del equipo: \n");
    fflush(stdin);
    gets(miEquipo.nombre);
    printf("Ingrese localidad del equipo: \n");
    fflush(stdin);
    gets(miEquipo.localidad);

    return miEquipo;
}

int cargarEquipos(sEquipo* equipo, int cant, int codigoEquipo)
{
    int i;
    int retorno = 0;
    i = buscarEquipoLibre(equipo, cant);

    if(i != -1)
    {
        equipo[i] = pedirEquipo();
        equipo[i].codigo = codigoEquipo;
        equipo[i].espacio = OCUPADO;
        retorno = 1;
    }
    return retorno;
}

int buscarEquipoPorCodigo(sEquipo* equipo, int codigo, int cant)
{
    int i;
    int retorno;

    for(i = 0; i < cant; i++)
    {
        if(codigo == equipo[i].codigo)
        {
            retorno = i;
        }
    }
    return retorno;

}
void mostrarEquipos(sEquipo* equipo, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf(" %d\t %s\t %s\n", equipo[i].codigo, equipo[i].nombre, equipo[i].localidad);
    }
}
