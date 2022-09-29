#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    bool album[576] = { false };
    bool game = true;


    while(game){
        char continuar;
        int numero;
        printf("Digite o numero da figurinha que você quer colar \n");
        scanf("%i", &numero);
        if (album[numero] == false){
            printf("Você colou a figurinha %i \n", numero);
        }
        else {
            printf("Você já colou essa figurinha \n");
        }
        printf("Você quer colar mais uma figurinha? Y/n \n");
        scanf(" %c", continuar);
        printf("%c", continuar);
        if (continuar=='Y'||continuar=='y'){
            printf("Você decidiu colar mais uma figurinha\n");
            free (continuar);
            free (numero);
        }
        if (continuar=='N'||continuar=='n'){
            printf("Você fechou o album\n");
            break;
        }
    }
    return 0;
}