#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){ 
    setlocale(LC_ALL, "Portuguese");
    int cartelas,numero ,bandeira,cartela [10], i , j , k , l;

    bandeira = 0;

    printf("Óla, informe quantas cartelas deseja gerar? ");
    scanf("%i", &cartelas);
	printf("\n");
    fflush(stdin);
    srand( time (NULL) );
    printf("\tCARTELAS DISPONIVEIS ABAIXO:\n\n");

    for(i= 0 ; i < cartelas ; i++){

        for(j= 0 ; j < 10 ; j++){
            numero = (rand() % 99);

            for(k=0; k <= j - 1; k++){
                if(numero == cartela [k]){
                    bandeira = 1;
                break;
                } 

        }\
        if(bandeira == 1){
            bandeira = 0;
            j = j - 1;

            }else{
            cartela [j] = numero;

        }

        }

        for(l= 0 ; l < 10 ; l++){
            printf("\t[%d]",cartela[l]);
        }
        printf("\n=======================================================================================================================\n\n");
    }
}

