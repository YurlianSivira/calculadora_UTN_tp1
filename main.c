#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*Funcion principal donde se llamaran todas las funciones del programa */
int main()
{
    /*DEFINO LAS VARIABLES A USAR*/
    char seguir = 's'; /*variable usada en el while para comparar la condicion en la opcion 9*/
    int opcion; /*almacena el numero de la opcion ingresado por el usuario */
    float valor1; /*se usa para almacenar el valor del primer operando */
    float valor2; /*se usa para almacenar el valor del segundo operando */
    float calculo; /*se empleara para almacenar la respuesta de cada una de las opciones del menu */
    long int calculoFactorial; /*variable para almacenar el valor de la operacion factorial */


    while(seguir == 's')/*se pregunta si varia la condicion y se sigue ejecutando el bucle hasta que el usuario ingresa la opcion 9*/
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
    printf("Elija una opcion del 1 al 9 y presione la tecla enter: ");
    scanf("%d", &opcion); /*almacena la opcion seleccionada */

        switch(opcion) /*se pregunta la opcion que desea efectuar el usuario */
        {
            case 1:/*PREGUNTO Y CAPTURO EL 1ER NUMERO A OPERAR*/
                system("cls"); /*limpio la pantalla*/
                printf("\n Ingrese el primer numero: ");
                scanf("%f",&valor1); /*se captura el primero de los valores con los que desea trabajar la persona */
                break;

            case 2:/*PREGUNTO Y CAPTURO EL 2DO NUMERO A OPERAR*/
                system("cls");/*limpio la pantalla*/
                printf("\n Ingrese el segundo numero: ");
                scanf("%f",&valor2); /* se captura y almacena el segundo valor con el que desea trabajar la persona */
                break;

            case 3:/*FUNCION SUMAR*/
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = sumar(valor1, valor2); /* se llama la funcion sumar pasandole los valores ingresados por el usuario como parametro */
                printf("El resultado de la suma es: %.2f", calculo); /*se imprime el resultado de la operacion*/

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 4:/*FUNCION RESTAR*/
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = restar(valor1, valor2); /* se llama la funcion restar pasandole los valores ingresados por el usuario como parametro */
                printf("El resultado de la resta es: %.2f", calculo); /*se imprime el resultado de la operacion*/

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 5: /*FUNCION DIVIDIR*/
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = dividir(valor1, valor2); /* se llama la funcion dividir pasandole los valores ingresados por el usuario como parametro */
                if(valor2 == 0) /*se evalua que el segundo valor ingresado por el usuario sea menor o igual  a 0 */
                {
                    printf("Error, para efectuar la operacion el divisor debe ser mayor a 0"); /*se imprime el mensaje de error de la evaluacion*/
                }else /*en caso de que valor2 sea mayor a 0 */
                {
                    printf("El resultado de la division es: %.2f", calculo); /*se imprime el resultado de la operacion*/
                }
                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 6: /*FUNCION MULTIPLICAR*/
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculo = multiplicar(valor1, valor2); /* se llama la funcion multiplicar pasandole los valores ingresados por el usuario como parametro */
                printf("El resultado de la multiplicacion es: %.2f", calculo); /*se imprime el resultado de la operacion*/

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 7: /*FUNCION FACTORIAL*/
                printf("*****************************************************************************************\n");
                printf("*****************************************************************************************\n");

                calculoFactorial = factorial(valor1); /*se llama la funcion factorial pasandole la parte entera del primer valor ingresado por el usuario*/
                printf("El factorial del numero es: %ld",calculoFactorial); /*se imprime el resultado de la operacion*/

                printf("\n*****************************************************************************************\n");
                printf("*****************************************************************************************\n");
                break;

            case 8: /*TODAS EN ESTE PUNTO SE EJECUTAN SIMULTANEAMENTE TODAS LAS OPERACIONES DANDO LOS RESULTADOS POR SEPARADOS Y ESPECIFICANDO CADA UNO*/
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

            case 9: /*OPCION SALIR sale del sistema y se despide de la persona */
                seguir = 'n';
                printf("HASTA LUEGO");
                break;

        }/*FINALIZA EL SWICTH*/
    };/*FINALIZA EL WHILE*/
    return 0;
}/*FIN DE LA FUNCION MAIN*/
