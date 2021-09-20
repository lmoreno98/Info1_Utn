#include <stdio.h>
float getfloat();
int main()
{
    int opcion = 1;
    float num1, num2;
    printf("Ingrese el primer numero: ");
    num1 = getfloat();
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num2);
    
    while (opcion != 5)
    {
        printf("Ingrese:\n");
        printf("1. Para suma de los valores\n");
        printf("2. Para resta de los valores\n");
        printf("3. Para multiplicacion de los valores\n");
        printf("4. Para division de los valores\n");
        printf("5. Salir\n");
        scanf("%d",&opcion);
        if (opcion == 1)
        {
            printf("%.2f\n",num1+num2);
        }
        else if (opcion == 2)
        {
            printf("%.2f\n",num1-num2);
        }
        else if (opcion == 3)
        {
            printf("%.2f\n",num1*num2);
        }
        else if (opcion == 4)
        {
            printf("%.2f\n",num1/num2);
        }
        else if (opcion == 5)
        {
            printf("Gracias por utilizar la calculadora\n");
        }
        else
        {
            printf("El valor ingresado es incorrecto intentelo de nuevo\n");
        }

    }
}
