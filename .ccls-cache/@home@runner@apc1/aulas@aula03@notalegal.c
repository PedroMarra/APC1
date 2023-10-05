#include <stdio.h> //printf - escreve no console; scanf - ler no console

int main() {
char item1[61] = "Caderno";
int quantidade1 = 1;
float preco1 = 20.0f;

char item2[61] = "Lapís";
int quantidade2 = 5;
float preco2 =5.0f;

char item3[61] = "Borracha";
int quantidade3 = 2;
float preco3 =6.0f;
printf("Entre com o nome do item1: ");
scanf("%s", item1);
printf("Entre com a qtde do item1: ");
scanf("%i", &quantidade1);
printf("Entre com o preco do item1: ");
scanf("%f", &preco1);

printf("Entre com o nome do item2: ");
scanf("%s", item2); 
printf("Entre com a qtde do item2: ");
scanf("%i", &quantidade2);
printf("Entre com o preco do item2: ");
scanf("%f", &preco2);

printf("Entre com o nome do item3: ");
scanf("%s", item3);
printf("Entre com a qtde do item3: ");
scanf("%i", &quantidade3);
printf("Entre com o preco do item3: ");
scanf("%f", &preco3);
  

  float total = quantidade1 * preco1;
  total = total + quantidade2 * preco2;
  total = total + quantidade3 * preco3;
  
printf("-----------------------------\n");
printf("        NOTA    LEGAL        \n");
printf("-----------------------------\n");
printf("Item          Qtd Valor      \n");
printf("%-13.13s %03i %11.2f\n", item1, 
       quantidade1, preco1);
printf("%-13.13s %03i %11.2f\n", item2,
 quantidade2, preco2);
printf("%-13.13s %03i %11.2f\n", item3,
  quantidade3, preco3);
printf("-----------------------------\n");
printf("Total          R$ %12.2f\n", total);
printf("-----------------------------\n");
  
  return 0;
}