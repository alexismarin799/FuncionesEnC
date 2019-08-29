#include <stdio.h>
#include <stdlib.h>
//funciones que realizan procesos
//funcion void();
void saludar();/* prototipos */
//int sumar(int numero1, int numero2);
void calcular(int numUno, int numDos, int operacion);
float sumar(int numUno, int numDos);
float restar(int numUno, int numDos);
float multiplicar(int numUno, int numDos);
float dividir(int numUno, int numDos);
void mostrar(float);
int pedirDatos();

int main()
{
    printf("Ingrese que operacion desea hacer:\n1- Sumar");
    printf("\n2- Restar\n3- Multiplicar\n4- Dividir\n");
    int operacion = pedirDatos();
    while(operacion < 1 || operacion > 4){
        printf("Ingresar un valor valido: \n");
        operacion = pedirDatos();
    }
    printf("Ingrese el primer numero");
    int numUno = pedirDatos();
    printf("Ingrese el segundo numero");
    int numDos = pedirDatos();

    calcular(numUno,numDos,operacion);




    //int valor;
    //valor = sumar(33,77);
    saludar();
    //sumar(valor);
    //printf("La suma es: %d \n", valor);
    return 0;
}
void saludar()
{
    printf("Hello world \n");
}

/*int sumar(int numero1, int numero2)
{
    int suma = numero1 + numero2;
    printf("Suma %d \n", suma);
    return suma;

}*/
//funcion con varias operaciones
void calcular(int numUno, int numDos, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = sumar(numUno,numDos);
        break;
    case 2:
        resultado = restar(numUno,numDos);
        break;
    case 3:
        resultado = multiplicar(numUno,numDos);
        break;
    case 4:
        resultado = dividir(numUno,numDos);
        break;
    }
     printf("%f \n", resultado);
}


    float sumar(int numUno, int numDos)
    {
        return numUno + numDos;
    }
    float restar(int numUno, int numDos)
    {
        return numUno - numDos;
    }
    float multiplicar(int numUno, int numDos)
    {
        return numUno * numDos;
    }
    float dividir(int numUno, int numDos)
    {
        return numUno / numDos;
    }
    void mostrar(float resultado)
    {
        printf("El resultado es %f \n", resultado);
        return mostrar;
    }





