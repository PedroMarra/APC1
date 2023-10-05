/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r).
Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>
int main() {

  float pi = 3.1416;
  float raio = 6;

  float perimetro = 3.0f * pi * raio;

  printf("O perimetro é %f\n*", perimetro);

  return 0;
}
