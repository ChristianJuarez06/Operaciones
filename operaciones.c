#include<stdio.h>
int main()
{
  float n1,n2,suma,resta,multiplicacion,division;
  int ops;

  printf("ingresa el primer numero");
  scanf("%f",&n1);
  printf("Ingresa el segundo numero");
  scanf("%f",&n2);
  printf("Ingresa 1 para hacer suma");
  printf("Ingresa 2 para hacer resta");
  printf("Ingresa 3 para hacer multiplicación");
  printf("Ingresa 4 para hacer división");
  scanf("%i",&ops);
  
  switch(ops)
    {
      case 1:
        suma=n1+n2;
        printf("El resultado de la suma es: %.2f",suma);
      break;
      case 2:
        resta=n1-n2;
        printf("El resultado de la resta es: %.2f",resta);
      break;
      case 3:
        multiplicacion=n1*n2;
        printf("El resultado de la multiplicación es: %.2f",multiplicacion);
      break;
      case 4:
        if(n2=!0)
        {
          division=n1/n2;
        printf("El resultado de la división es: %.2f",division);
        }
        else
        {
          printf("ERROR en segundo numero debe ser diferente a 0");
        }
      break;
      default:
        printf("ERROR opcion incorresta debe ser de 1-4");
    }
  return 0; 
}
