/*Faça um programa em C que leia uma tecla pressionada e determine se ela é uma
 * letra, um dígito ou um caractere especial.
 */

#include <stdio.h>
int main() {
  char tecla = 0;

  printf("Pressione uma tecla:");
  int leu_certo = scanf("%c", &tecla);

  if (tecla >= '0' && tecla <= '9') {
    printf(" Vc pressionou um dígito\n");
  } else if ((tecla >= 'A' && tecla <= 'Z') || (tecla >= 'a' && tecla <= 'z')) {
    printf(" Vc pressionou uma tecla\n");
  } else {
    printf("Vc pressionou um caracter especial\n");
  }

  return 0;
}
