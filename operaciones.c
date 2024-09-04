#include<stdio.h>
int main()
{
  int n1,n2,suma,resta,ops;

  printf("ingresa el primer numero: ");
  scanf("%i",&n1);
  printf("Ingresa el segundo numero: ");
  scanf("%i",&n2);
  printf("Ingresa 1 para hacer suma o ingresa 2 para hacer resta: ");
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
      default:
        printf("ERROR opcion incorresta debe ser 1 o 2");
    }
  return 0; 
}
