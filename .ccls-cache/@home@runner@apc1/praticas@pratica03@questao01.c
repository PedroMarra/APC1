/*faça um programa em C que determine se um número inteiro lido é par ou ímpar*/

#include <stdio.h>

int main(){
int numero = 0;

  printf("Entre com um numero inteiro: ");
  scanf("%i", &numero);

  int numero_eh_divisivel_por_2 = numero % 2 == 0;
  if( numero_eh_divisivel_por_2){
    printf("O numero %i é par!\n", numero);
  }
  else{
  printf("O numero %i é impar\n", numero);
  }

  //int numero_nao_eh_divisivel_por_2 = numero % 2 != 0;

  //if(numero_nao_eh_divisivel_por_2){
  //printf("O numero %i é impar!\n", numero);
  //}ls
  
  return 0;
}

