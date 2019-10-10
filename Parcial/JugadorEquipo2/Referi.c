#include "Referi.h"

int inicializarReferi(sReferi* referi, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && referi != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            referi[i].espacio = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int buscarReferiLibre(sReferi* referi, int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i ++)
    {
        if(referi[i].espacio == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;
}

sReferi pedirReferi()
{
     sReferi miReferi;

    printf("Ingrese nombre del referi: \n");
    fflush(stdin);
    gets(miReferi.nombre);
    printf("Ingrese apellido del referi: \n");
    fflush(stdin);
    gets(miReferi.apellido);
    printf("Ingrese sexo del referi: \n");
    scanf("%f", & miReferi.sexo);
    printf("Ingrese eMail del referi: \n");
    fflush(stdin);
    gets(miReferi.eMail);
    printf("Ingrese fecha de nacimiento(dia/mes/año): \n");
    scanf("%d %d %d", & miReferi.fechaNac.dia,miReferi.fechaNac.mes,miReferi.fechaNac.anio);

    return miReferi;
}

int cargarReferis(sReferi* referi, int cant, int codigoReferi)
{
    int i;
    int retorno = 0;
    i = buscarReferiLibre(referi, cant);

    if(i != -1)
    {
        referi[i] = pedirReferi();
        referi[i].codigo = codigoReferi;
        referi[i].espacio = OCUPADO;
        retorno = 1;
    }
    return retorno;
}
void mostrarReferi(sReferi* referi, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        printf(" %d\t %s\t %s\t %f\t %s\t %d/%d/%d \n", referi[i].codigo,
                                                        referi[i].nombre,
                                                        referi[i].apellido,
                                                        referi[i].sexo,
                                                        referi[i].eMail,
                                                        referi[i].fechaNac.dia,
                                                        referi[i].fechaNac.mes,
                                                        referi[i].fechaNac.anio);
    }
}
int buscarReferiPorCodigo(sReferi* referi, int codigo, int cant)
{
    int i;
    int retorno;

    for(i = 0; i < cant; i++)
    {
        if(codigo == referi[i].codigo)
        {
            retorno = i;
        }
    }
    return retorno;

}
