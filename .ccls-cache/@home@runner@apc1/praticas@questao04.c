/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP 0.0165

int main(){
  float preco_inicial = 120.f;
  
 float  icms = preco_inicial * ICMS;
 float  cofins = preco_inicial * COFINS;
 float pis_pasep = PIS_PASEP;
 int um = 1;


  float preco_final =  (1 + ICMS + COFINS + PIS_PASEP)  * preco_inicial;

  printf("O preço final do produto, incluindo impostos, é R$ %f\n", preco_final);
  printf("O valor do ICMS é%f\n",  preco_inicial * ICMS);
  printf("O valor do COFINS é %f\n",  preco_inicial * COFINS);
  printf("O valor do PIS_PASEP é %f\n", preco_inicial *PIS_PASEP);
  return 0;
}