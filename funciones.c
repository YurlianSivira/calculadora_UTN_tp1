#include <stdio.h>
#include <stdlib.h>

float sumar(float valor1, float valor2)
{
    float resultadoSuma;

        resultadoSuma = valor1 + valor2;

    return resultadoSuma;
}

float restar(float valor1, float valor2)
{
    float resultadoResta;

        resultadoResta = valor1 - valor2;

    return resultadoResta;
}

float dividir(float valor1,float valor2)
{
    float resultadoDividir;

        resultadoDividir = valor1 / valor2;

    return resultadoDividir;
}

float multiplicar(float valor1, float valor2)
{
    float resultadoMultiplicacion;

        resultadoMultiplicacion = valor1 * valor2;

    return resultadoMultiplicacion;
}

long int factorial(int valor1)
{
    long int resultadoFactorial;

        if(valor1 == 1){
            return 1;
        }

    resultadoFactorial = valor1*factorial(valor1-1);

    return resultadoFactorial;
}
