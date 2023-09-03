/*
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>
int main() {

  float valor_em_gigabytes = 3.0;
  double valor_em_bytes = valor_em_gigabytes * 1024 * 1024 * 1024;

  printf("3.0 gigabytes equivalem a %f\n",valor_em_bytes);
  
return 0;
}





