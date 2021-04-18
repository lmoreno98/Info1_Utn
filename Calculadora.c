// Headers.c
#include <stdio.h>
int suma(float *num1,float *num2,float *resultado);
int resta(float *num1,float *num2,float *resultado );
int multiplicacion(float *num1,float *num2,float *resultado);
int division(float *num1,float *num2,float *resultado);
int factorial(float *num1,float *resultado);


// Funciones.c
int suma(float *num1,float *num2,float *resultado)
{
    *resultado = *num1 + *num2;
    return 1;
}

int resta(float *num1,float *num2,float *resultado)
{
    *resultado = *num1 - *num2;
    return 1;
}

int multiplicacion(float *num1,float *num2,float *resultado)
{
    *resultado = *num1 * *num2;
    return 1;
}

int division(float *num1,float *num2,float *resultado)
{
    if (*num2 == 0)
    {
        return 0;
        
    }
    else
    {
        *resultado = *num1 / *num2;
        return 1 ;
    }
}

int factorial(float *num1, float *resultado)
{   
    (*resultado) = 1;
    for (int i = 1; i <= *num1; i++)
    {
        *resultado = i*(*resultado);
    }
    return 2;
}


// main.c
int main()
{
    int verif = 1;
    float num1,num2,resultado,resultado1;
    char ope;
    printf("Ingrese el primer numero: ");
    scanf("%f",& num1);
    printf("Ingrese el primer numero: ");
    scanf("%f",& num2);
    printf("Ingrese la operacion que decea realiza '+' '-' '*' '/' '!': ");
    scanf(" %c",& ope);
    
    switch(ope)
    {
        case '+':
            suma(&num1,&num2,&resultado);
            break;
        case '-':
            resta(&num1,&num2,&resultado);
            break;
        case '*':
            multiplicacion(&num1,&num2,&resultado);
            break;
        case '/':
            verif = division(&num1,&num2,&resultado);
            break;
        case '!':
            verif = factorial(&num1,&resultado);
            factorial(&num2,&resultado1);
            break;
        
    }
    
    if (verif == 0)
    {
        printf("Valor no es divisible por 0");
    }
    else if (verif == 2)
    {
        printf("%.2f%c = %.2f\n",num1,ope,resultado);
        printf("%.2f%c = %.2f",num2,ope,resultado1);
    }
    else
    {
        printf("%.2f %c %.2f = %.2f", num1, ope, num2, resultado);   
    }
    
    return 0;
}
