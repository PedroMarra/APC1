/*Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.*/

#include <stdio.h>
int main(){

  printf("Multiplos de 3 entre 1 e 100:\n");

for (int i = 1; i <= 101; i++){
  if(i % 3 == 0){ 
  printf("%d\n", i);
    }
}

  return 0;
}