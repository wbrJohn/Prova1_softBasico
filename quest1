#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Escreva uma função com nome de ordena, sem valor de retorno, que receba dois parâmetros, sendo o primeiro um vetor de inteiros e o segundo um 
número inteiro indicando o tamanho do vetor, que ordene em ordem crescente os elementos dentro do mesmo vetor. A função deve armazenar o menor 
valor na primeira posição do vetor o maior na última posição. Escreva também uma função main que crie um vetor com valores -2, 10, 15, 31, -32 e 3 
e que utilize a função ordena e, logo após, imprima em tela o conteúdo do vetor modificado.*/

int v[] = {-2, 10, 15, -32, 3};

int ordena(int t){
    int aux = 0;

    printf("Vetor Inicial: ");
    for(int a = 0; a < t; a++){
        printf("%d ,", v[a]);
    }
    printf("\n");

    for (int f = 0; f < t; f++){

        for (int i = 0; i < t; i++){
            if (v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }

    printf("Vetor Ordena: ");
    for(int b = 0; b < t; b++){
        printf("%d ,", v[b]);
    }
    printf("\n");

    return 0;
}

int main(void) {
  int t = 5;

  ordena (t);
 
  return 0;
}
