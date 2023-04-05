#include <stdio.h>
 struct list_dul{
 char nome;
 char espaco;
 char incio;
 char fim;
   char mauscula;
 };

int main(void) {
 struct list_dul(incio);{
   printf("digite o seu nome completo \n",incio);
   scanf("incio,nome");
 };
  struct list_dul(espaco);{
    printf("escreva com espacomento este nome\n",espaco);
    scanf("nome,espaco");
  };
  struct list_dul(mauscula);{
    printf("digite uma letra mauscula\n",mauscula);
    scanf("nome,mauscula");
  }
  struct list_dul(fim);{
    printf("nome fim imprime o seu nome completo\n",fim);
    printf("nome,fim");
  }
  return 0;
}