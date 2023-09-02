/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>
int main(){
  
  float icms = 0.17;
  float cofins = 0.0766;
  float pis_pasep = 0.0165;
  float um = 1.0;
float preco_inicial = 120;

  float preco_final =  (um + icms + cofins + pis_pasep)  * preco_inicial;

  printf("O preço final do produto, incluindo impostos, é R$ %f\n", preco_final);

  return 0;
}