#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion;
    float valor1;
    float valor2;
    float calculo;
    long int calculoFactorial;


    while(seguir == 's')
    {

    printf("\n\n");
    printf("  ********************************************************************************************************************\n");
    printf("  ******                                         CALCULADORA                                                    ******\n");
    printf("  *****                                                                                                          *****\n");
    printf("  ****                                         MENU DE OPCIONES                                                   ****\n");
    printf("  ***                                                                                                              ***\n");
    printf("  **                                                                                                                  \n");
    printf("                                         1- Ingresar 1er operando (A=%.2f)",valor1                                       );
    printf("                                                                                                                      \n");
    printf("                                         2- Ingresar 2do operando (B=%.2f)",valor2                                       );
    printf("                                                                                                                      \n");
    printf("                                                                                                                    **\n");
    printf("  **    3- Calcular la suma (A+B)             4- Calcular la resta (A-B)      5- Calcular la division (A/B)         **\n");
    printf("  ***                                                                                                              ***\n");
    printf("  ****  6- Calcular la multiplicacion (A*B)   7- Calcular el factorial (A!)   8- Calcular todas las operaciones   ****\n");
    printf("  *****                                                                                                          *****\n");
    printf("  ******                                          9- Salir                                                      ******\n");
    printf("  ********************************************************************************************************************\n");
    printf("\n");
    printf("Elija una opcion del 1 al 9: ");
    scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("\n Ingrese el primer numero: ");
                scanf("%f",&valor1);
                break;

            case 2:
                system("cls");
                printf("\n Ingrese el segundo numero: ");
                scanf("%f",&valor2);
                break;

            case 3:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = sumar(valor1, valor2);
                printf("El resultado de la suma es: %.2f", calculo);

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 4:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = restar(valor1, valor2);
                printf("El resultado de la resta es: %.2f", calculo);

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 5:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = dividir(valor1, valor2);
                if(valor2 == 0)
                {
                    printf("Error, para efectuar la operacion el divisor debe ser mayor a 0");
                }else
                {
                    printf("El resultado de la division es: %.2f", calculo);
                }
                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 6:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = multiplicar(valor1, valor2);
                printf("El resultado de la multiplicacion es: %.2f", calculo);

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 7:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculoFactorial = factorial(valor1);
                printf("El factorial del numero es: %ld",calculoFactorial);

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 8:
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = sumar(valor1, valor2);
                printf("El resultado de la suma es: %.2f", calculo);
                printf("\n\n");

                calculo = restar(valor1, valor2);
                printf("El resultado de la resta es: %.2f", calculo);
                printf("\n\n");

                calculo = dividir(valor1, valor2);
                if(valor2 == 0)
                {
                    printf("Error, para efectuar la operacion el divisor debe ser mayor a 0");
                }else
                {
                    printf("El resultado de la division es: %.2f", calculo);
                }
                printf("\n\n");

                calculo = multiplicar(valor1, valor2);
                printf("El resultado de la multiplicacion es: %.2f", calculo);
                printf("\n\n");

                calculoFactorial= factorial(valor1);
                printf("El factorial del numero es: %ld",calculoFactorial);

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 9:
                seguir = 'n';
                printf("HASTA LUEGO");
                break;

        }/*FINALIZA EL SWICTH*/

    };



    return 0;






}
