#include <stdio.h>

//Pruebas de GIT

void main(){
    int menu=0;

    printf("Hello world.\n");
    printf("--------Calculadora--------\n");
    printf("Opciones\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    scanf("%d", menu);

    switch (menu)
    {
    case 1:
        printf("Funciona.");
        break;
    case 2:
        printf("Funciona.");
        break;
    case 3:
        printf("Funciona.");
        break;
    case 4:
        printf("Funciona.");
        break;        
    default:
    printf("Opcion invalida, prueba de nuevo.");
        break;
    }
}

