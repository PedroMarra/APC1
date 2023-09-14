/*
Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
  */
#include <stdio.h>
#include <math.h>
int main(){
int coeficiente_A = -1;
int coeficiente_B = 2;
int coeficiente_C = 1;

  double delta = pow(coeficiente_B,2)-4 * coeficiente_A * coeficiente_C;
  double raiz1 = (-coeficiente_B + sqrt(delta))/2 * coeficiente_A;
  double raiz2 = (-coeficiente_B - sqrt(delta))/2* coeficiente_A;

printf("As raizes da equação %dx ^2 %dx %d são %f e %f\n", coeficiente_A , coeficiente_B, coeficiente_C, raiz1, raiz2);

  return 0;
}