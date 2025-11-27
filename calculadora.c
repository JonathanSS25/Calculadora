#include <stdio.h>

//Pruebas de GIT

//Funciones

void Resta(){
    float n1 = 0.0, n2 = 0.0;
    printf("Escribe el primer numero que deseas restar: ");
    scanf("%f", &n1);
    printf("Escribe el segundo numero que deseas restar: ");
    scanf("%f", &n2);
    printf("El resultado es: %.2f", n1 - n2);
}

void Suma(){
    float n1 = 0.0, n2 = 0.0;
    printf("Escribe el primer numero que deseas sumar: ");
    scanf("%f", &n1);
    printf("Escribe el segundo numero que deseas sumar: ");
    scanf("%f", &n2);
    printf("El resultado es: %.2f", n1 + n2);
}

void Division()
{
    float n1 = 0.0, n2 = 0.0;
    printf("Escribe el primer numero a multiplicar: ");
    scanf("%f", &n1);
    printf("Escribe el primer numero a multiplicar: ");
    scanf("%f", &n2);
    printf("El resultado es: %.2f", n1 * n2);
}

void main(){
    int menu = 0;

    printf("Hello world.\n");
    printf("--------Calculadora--------\n");
    printf("Opciones\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        Suma();
        break;
    case 2:
        Resta();
        break;
    case 3:
        Multiplicacion();
        break;
    case 4:
        printf("Funciona.");
        break;        
    default:
    printf("Opcion invalida, prueba de nuevo.");
        break;
    }
}

