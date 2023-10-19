/*Faça um programa em C que calcule o fatorial de um número inteiro.*/

#include <stdio.h>
int main(){

  int numero = 0;
  long int fatorial = 1;
  
  printf( "Entre com um numero inteiro >0: ");
  int leu_certo = scanf("%i", &numero);
  
  for(int i=0; i<numero; i++) {
    fatorial = fatorial * (numero -i);
  }

  printf("O fatorial de %i eh %li\n", numero, fatorial);
  
  return 0;
}

