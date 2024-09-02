#include<stdio.h>
int main()
{
  float n1,n2,suma,resta,mult,div;
  int ops;

  printf("ingresa el primer numero");
  scanf("%f",&n1);
  printf("Ingresa el segundo numero");
  scanf("%f",&n2);
  printf("Ingresa 1 para hacer suma \n");
  printf("Ingresa 2 para hacer resta \n");
  printf("Ingresa 3 para hacer multiplicación \n");
  printf("Ingresa 4 para hacer división \n");
  scanf("%i",&ops);
  
  switch(ops)
    {
      case 1:
        suma=n1+n2;
        printf("El resultado de la suma es: %f",suma);
      break;
      case 2:
        resta=n1-n2;
        printf("El resultado de la resta es: %f",resta);
      break;
      case 3:
      mult=n1*n2;
      printf("El resultado de la multiplicación es de: %f",mult);
      break;
      case 4:
      if(n2!=0)
      {
        div=n1/n2;
        printf("El resultado de la división es de: %f",div);
      }
      else 
      {
        printf("ERROR en segundo numero debe ser diferente a 0");
      }
      break;
      default:
        printf("ERROR opcion incorresta debe ser 1-4");
    }
  return 0; 
}
