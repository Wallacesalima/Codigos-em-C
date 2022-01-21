#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	int cont111=0,cont222=0,cont333=0,cont444=0,cont11=0,cont22=0,cont33=0,contInP=0, menu, comp;
	aqui:
		
    setlocale(LC_ALL,"Portuguese");
	
	printf("Escolha uma opção :\n");
	printf(" 1 | Votar           \n");
	printf(" 2 | Apuração de votos\n");		
	printf(" 3 | Sair \n");		
	fflush(stdin);
	scanf("%d", &menu);	
	while(menu==3){
		goto fim;
	}
	while (menu==1){
		system("CLS");
		printf("Escolha um vereaodr(a):\n");
		printf("  111 | João do frete \n");
		printf("  222 | MAri da pamonha \n");		
		printf("  333 | Zé da farmacia \n");		
		printf("  444 | Nulo \n");		
		fflush(stdin);
	    scanf("%d", &menu);
		system("CLS");	
		switch (menu){
			case 111: 	           
			    printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont111=cont111+1;
				break;
			case 222:
				printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont222=cont222+1;
				break;
			case 333:
			    printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont333=cont333+1;
				break;
			case 444:
				printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont444=cont444+1;
				break;
			default: 
			    printf ("Opção inválida! \nVoto não computado... \n");
			    system ("pause");	
				break;
		}		
		system("CLS");
		printf("Escolha um prefeito:\n");
		printf("  11 | DR. zureta \n");
		printf("  22 | Senhor Gomes \n");		
		printf("  33 | Nulo \n");		
		fflush(stdin);
	    scanf("%d", &menu);
		system("CLS");	
		switch (menu){
			case 11: 
	            printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont11=cont11+1;
				break;
			case 22:
	            printf("voto computado! \n");
	            system ("pause");
		      	system("CLS");
				cont22=cont22+1;
				break;
			case 33:
	            printf("voto computado! \n");
	            system ("pause");
			    system("CLS");
				cont33=cont33+1;
				break;
			default: 
			    printf ("Opção inválida! \nVoto não computado... \n ");
			    system ("pause");
			    system ("CLS");
				break;		
		}  
    	goto aqui;
	}
	while (menu==2){
		
		printf("Apuração dos votos \n");
		for (comp=0; comp<10; comp++){
			printf("Aguarde...\n");
			
			system("CLS");
		}
		system("CLS");
		printf("|   Candidatos a vereaodr    |  Votos \n");
		printf("| 111 | João do frete        |    %d       \n",cont111);
		printf("| 222 | Maria Da Pamonha     |    %d       \n",cont222);		
		printf("| 333 | Zé da farmacia       |    %d       \n",cont333);		
		printf("| 444 | Nulo                 |    %d       \n",cont444);	
		
		printf("\n");
		printf("\n");
		
		printf("|   Candidatos a prefeito    |  Votos \n");		
		printf("| 11 | DR. Zureta            |    %d      \n",cont11);
		printf("| 22 | Senhor Gomes          |    %d      \n",cont22);				
		printf("| 33 | Nulo                  |    %d      \n",cont33);		
		system("pause");
		goto aqui;	
	}
fim:
	    system ("color 2E");
	    system("CLS");	
		printf("Obrigado por participar da votação... \n");
}







