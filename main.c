#include <stdio.h>

// Función para convertir un número decimal a binario
void decimalToBinary(int num) {
    if (num == 0) {
        printf("0"); // Si el número es 0, su representación binaria es simplemente "0"
        return;
    }

    int binary[32]; // Almacenaremos los dígitos binarios en un arreglo
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2; // Obtenemos el dígito binario actual
        num = num / 2; // Dividimos el número decimal por 2
        i++;
    }

    // Imprimimos los dígitos binarios en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {

    char operacion;
    printf("Ingrese una opcion:\n");

    printf("a ) x= 11000101 << 1\n");
    printf("b ) x= 11000101 << 2\n");
    printf("c ) x= 11000101 << 3\n");
    printf("d ) x= 11000101 >> 1\n");
    printf("e ) x= 11000101 >> 2\n");
    printf("f ) x= 11000101 >> 3\n");

    scanf(" %c", &operacion);
    int x1 = 11000101;  // Se asigna valor binario a la variable x = 197 decimal

    int x = 197;//Declaracion de la variable constante en decimal

    switch (operacion) {

        case 'a':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion A correspondiente a x= 11000101 << 1 \n");



        //Conversion de a decimal
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x << 1;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x a decimal es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario es: %d\n", x1);
        x1 = x1 << 1;  // Desplazamos los bits una posición a la izquierda

        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;

        case 'b':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion B correspondiente a x= 11000101 << 2 \n");

        //int x = 197; YA ESTA DECLARADA
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x << 2;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x a decimal es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario es: %d\n", x1);
        x1 = x1 << 2;  // Desplazamos los bits una posición a la izquierda

        //Utilizacion de funcion de convertir decimal a bintario
        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;
        case 'c':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion C correspondiente a x= 11000101 << 3 \n");

        //int x = 197; //YA ESTA DECLARADA
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x << 3;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x a decimal es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario es: %d\n", x1);
        x1 = x1 << 3;  // Desplazamos los bits una posición a la izquierda

        //Utilizacion de funcion de convertir decimal a bintario
        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;

        case 'd':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion D correspondiente a x= 11000101 >> 1 \n");

        //int x = 197; //YA ESTA DECLARADA
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x >> 1;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario a decimal es: %d\n", x1);
        x1 = x1 >> 1;  // Desplazamos los bits una posición a la izquierda

        //Utilizacion de funcion de convertir decimal a bintario
        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;

        case 'e':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion E correspondiente a x= 11000101 >> 2 \n");

        //int x = 197; //YA ESTA DECLARADA
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x >> 2;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario a decimal es: %d\n", x1);
        x1 = x1 >> 2;  // Desplazamos los bits una posición a la izquierda

        //Utilizacion de funcion de convertir decimal a bintario
        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;

        case 'f':
            printf("\t********SOLUCION******** \n");
        printf("Selecciono la opcion F correspondiente a x= 11000101 >> 3 \n");

        //int x = 197; //YA ESTA DECLARADA
        printf("\tEl valor inicial del numero binario \"11000101\" a decimal es: %d\n", x);
        x = x >> 3;  // Desplazamos los bits una posición a la izquierda
        printf("\tEl nuevo valor de x es: %d\n", x);

        //Conversion a binario
        printf("\tEl valor inicial del numero binario a decimal es: %d\n", x1);
        x1 = x1 >> 3;  // Desplazamos los bits una posición a la izquierda

        //Utilizacion de funcion de convertir decimal a bintario
        printf("\tEl nuevo valor de x en binario es: ");
        decimalToBinary(x);
        printf("\n");

        break;
        default:
            printf("Opcion incorrecto, ingrese a, b, c, d, e o f\n");
    }







    return 0;
}

