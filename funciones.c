#include <stdio.h>
#include <stdlib.h>



/** \brief Funcion que suma los valores enteros o decimales ingresados por el usuario
 *
 * \param valor1 float es el primer valor ingresado por el usuario en la funcion principal
 * \param valor2 float es el segundo valor ingresado por el usuario en la funcion principal
 * \return float devuelve la sumatoria de los dos valores ingresados
 *
 */
float sumar(float valor1, float valor2)
{
    float resultadoSuma;

        resultadoSuma = valor1 + valor2;

    return resultadoSuma;
}

/** \brief funcion que resta los valores ingresados por el usuario sean enteros o decimales
 *
 * \param valor1 float es el primer valor ingresado por el usuario en la funcion principal
 * \param valor2 float es el segundo valor ingresado por el usuario en la funcion principal
 * \return float devuelve la resta o sustraccion entre los dos valores ingresados por el usuario
 *
 */
float restar(float valor1, float valor2)
{
    float resultadoResta;

        resultadoResta = valor1 - valor2;

    return resultadoResta;
}

/** \brief funcion que permite dividir los numeros ingresados por el usuario sean decimales o enteros
 *
 * \param valor1 float es el primer valor ingresado por el usuario en la funcion principal
 * \param valor2 float es el segundo valor que ingresa el usuario y es usado para verificar que sea mayor a 0
 * \return float una vez verificado que el valor2 sea mayor a cero devuelve el resultado de lo contrario devuelve un mensaje de error
 *               que indica que para poder efectuar la operacion el numero divisor debe ser mayor a 0
 */
float dividir(float valor1,float valor2)
{
    float resultadoDividir;

        resultadoDividir = valor1 / valor2;

    return resultadoDividir;
}

/** \brief funcion que permite multiplicar los dos valores ingresados por el usuario
 *
 * \param valor1 float es el primer valor ingresado por el usuario en la funcion principal
 * \param valor2 float es el segundo valor ingresado por el usuario en la funcion principal
 * \return float devuelve el producto de los dos numeros ingresados
 *
 */
float multiplicar(float valor1, float valor2)
{
    float resultadoMultiplicacion;

        resultadoMultiplicacion = valor1 * valor2;

    return resultadoMultiplicacion;
}

/** \brief funcion que permite calcular el factorial del primer valor ingresado por el usuario (valor1)
 *
 * \param valor1 int toma la parte entera del valor ingresado por el usuario en la funcion principal para hacer el calculo
 * \return long int devuelve el producto de los numeros entre el 1 y el valor ingresado por el usuario
 *
 */
long int factorial(int valor1)
{
    long int resultadoFactorial;

        if(valor1 == 1){
            return 1;
        }

    resultadoFactorial = valor1*factorial(valor1-1);

    return resultadoFactorial;
}
