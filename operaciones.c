#include<stdio.h>
int main()
{
  float n1,n2,suma,resta,multiplicacion,division;
  int ops;

  printf("ingresa el primer numero");
  scanf("%f",&n1);
  printf("Ingresa el segundo numero");
  scanf("%f",&n2);
  printf("Ingresa 1 para hacer suma o ingresa 2 para hacer resta");
  scanf("%i",&ops);
  switch(ops)
    {
      case 1:
        suma=n1+n2;
        printf("El resultado de la suma es: %i",suma);
      break;
      case 2:
        resta=n1-n2;
        printf("El resultado de la resta es: %i",resta);
      break;
      case 3:
        multiplicacion=n1*n2;
        printf("El resultado de la multiplicacion es: %i",multiplicacion);
      break;
      case 4:
        if(n2=!0)
        {
          division=n1/n2;
        printf("El resultado de la division es: %i",division);
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
