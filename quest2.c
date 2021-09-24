#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva um programa que receba do usuário duas strings de no máximo 50 posições cada e verifique se as duas strings são iguais. A saída do programa
deve apresentar uma mensagem indicando se os valores digitados são iguais ou não.*/

int main(void) {
    char str1[50];// = {"minha String"};
    char str2[50];// = {"minha String"};

    int t1 = 0, t2 = 0;

    printf("Digite a string 1: ");
    scanf("%s", str1);  
    
    printf("Digite a string 2: ");
    scanf("%s", str2);  

    if (strcmp(str1, str2) == 0) {
        printf("São iguais\n");
    } else {
        printf("São diferentes\n");
    }

    return 0;
}
