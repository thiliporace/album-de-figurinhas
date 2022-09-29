#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  bool album[576] = {false};
  bool colar = true;
  bool game = true;
  int repetidas[576] = {0};
  while (game) {
    int modo;

    printf("O que você quer fazer? \n 1: Registrar uma figurinha colada 2: "
           "Registrar "
           "um figurinha repetida ou fazer troca 3: Sair do programa \n");
    scanf("%i", &modo);
    if (modo == 1) {
      while (colar) {
        char continuar[2];
        int numero;
        printf("Digite o numero da figurinha que você quer colar \n");
        scanf("%i", &numero);
        if (album[numero] == false) {
          printf("Você colou a figurinha %i \n", numero);
          album[numero] = true;
        } else {
          printf("Você já colou essa figurinha \n");
        }
        printf("Você quer colar mais uma figurinha? Y/n \n");
        scanf(" %s", continuar);
        printf("%c", &continuar);

        if (strcmp(continuar, "Y") == 0) {
          printf("Você decidiu colar mais uma figurinha\n");
        } else if (strcmp(continuar, "n") == 0) {
          printf("Você fechou o album\n");
          colar = false;
        }
      }
    } else if (modo == 2) {
      int fazer;
      int repetida;
      printf("O que você quer fazer com as suas repetidas?\n1: Adiciona "
             "2: Trocar 3: Listar");
      scanf("%i", &fazer);
      if (fazer == 1) {
        printf("Qual é a figurinha repetida?");
        scanf("%i", &repetida);
        repetidas[repetida] += 1;
      } else if (fazer == 2) {
        printf("Qual figurinha você quer trocar?\n");
        scanf("%i", &repetida);
        repetidas[repetida] -= 1;
        printf("Por qual?\n");
        scanf("%i", &repetida);
        repetidas[repetida] += 1;
      } else if (fazer == 3) {
        for (int i = 0; i < 576; i++) {
          if (repetidas[i] > 0) {
            printf("%i:", i);
            printf("%i \n", repetidas[i]);
          }
        }
      }

    } else if (modo == 3) {
      printf("Adeus! \n");
      game = false;
    }
  }

  return 0;
}