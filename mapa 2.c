#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 


int main () {
	FILE *saida;
	char  nome[50];
	int  idade, sexo;
	char cpf[12];
	char opcao;
	int  cont=0,comp;
	printf("SISTEMA TRIAGEM \n");
	printf("RESPONDA O QUESTIONÁRIO \n",setlocale(LC_ALL,"Portuguese"));
	printf("DIGITE SEU CPF - *APENAS OS NUMEROS \n");
	fflush(stdin);
	scanf(" %12[^\n]",&cpf);
	printf("DIGITE SEU NOME \n");
	fflush(stdin);
	scanf (" %50[^\n]",&nome);
	saida = fopen (nome, "w");
	fprintf (saida,"CPF:  %s \n",cpf);
	fprintf (saida,"Nome: %s \n",nome);
	printf("DIGITE SUA IDADE \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%d",&idade);
	fprintf (saida,"IDADE:  %d \n",idade);
	sexer:
	printf("DIGITE SEU SEXO MASCULINO[1] OU FEMININO[2] \n",setlocale(LC_ALL,"Portuguese"));
	scanf("%d",&sexo);
	fflush(stdin);
	
	switch (sexo){
		
		case 1: 
			printf ("SEXO: MASCULINO");
			fprintf (saida,"SEXO: MASCULINO\n");
			break;
		case 2:
	   		printf ("SEXO: FEMININO");
	   		fprintf (saida,"SEXO: FEMININO\n");
	   		break;
	   	default:
	   		printf("Sexo Errado \n");
	   		goto sexer;
	   		break;
	}
	system("cls");
	printf("AGORA RESPONDA O QUESIONÁRIO SOBRE SINTOMAS DO COVID \n",setlocale(LC_ALL,"Portuguese"));
	aqui:
	printf("TEM FEBRE?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+5;
			break;
		case 's':
			cont=cont+5;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui;
	}
	system("cls");
	aqui1:
	printf("TEM DOR DE CABEÇA?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui1;
	}
	system("cls");
	aqui2:
	printf("TEM SECREÇAO NASAL OU ESPIRROS?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+1;
			printf("%d \n",cont);
			break;
		case 's':
			cont=cont+1;
			printf("%d \n",cont);
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui2;
	}
	system("cls");
	aqui3:
	printf("TEM DOR/IRRITAÇÃO NA GARGANTA?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui3;
	}
	system("cls");
	aqui4:
	printf("TEM TOSSE SECA?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+3;
			break;
		case 's':
			cont=cont+3;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui4;
	}
	system("cls");
	aqui5:
	printf("TEM DIFICULADE RESPIRATÓRIA?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+10;
			break;
		case 's':
			cont=cont+10;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));	
			goto aqui5;
	}
	system("cls");
	aqui6:
	printf("TEM DORES NO CORPO?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui6;
	}
	system("cls");
	aqui7:
	printf("TEM DIARRÉIA?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));			
			goto aqui7;
	}
	system("cls");
	aqui8:
	printf("ESTEVE EM CONTANTO, NOS ULTIMOS 14 DIAS, COM UM CASO  COM ALGUÉM DIAGNOSTICADO COM COVID-19?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+10;
			break;
		case 's':
			cont=cont+10;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));			
			goto aqui8;
	}
	system("cls");
	aqui9:
	printf("ESTEVE EM LOCAIS COM GRANDE AGLOMERAÇÃO?[S]IM [n]ÃO \n",setlocale(LC_ALL,"Portuguese"));
	fflush(stdin);
	scanf("%s",&opcao);
	switch (opcao){
		case 'S':
			cont=cont+3;
			break;
		case 's':
			cont=cont+3;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));			
			goto aqui9;
	}
	system("cls");
	for (comp=0; comp<20; comp++){
		printf("Aguarde!\n");
		system("cls");
	
	}


	fflush(stdin);
	printf("--------------------------------------\n");
	printf("RESUMO DO PACIENTE\n");
	printf("--------------------------------------\n");
	printf("Nome: %s \n",nome);
	printf("--------------------------------------\n");
	printf("IDADE: %d\n",idade);
	printf("--------------------------------------\n");
	if (sexo ==1) {
		printf ("SEXO: MASCULINO\n");
	}
	if (sexo==2){
		printf ("SEXO: FEMININO\n");
	}
	printf("--------------------------------------\n");
	

	printf("SEU RESULTADO FOI: %d pts\n",cont);
	fprintf (saida,"SEU RESULTADO FOI: %d pts\n",cont);
	printf("--------------------------------------\n");
	if ((cont>=0)&&(cont<=9)){
		printf("VOCE VAI SER ENCAMINHADO PARA ALA DE: BAIXO RISCO\n");
		fprintf(saida,"VOCE VAI SER ENCAMINHADO PARA ALA DE: BAIXO RISCO\n");	
	}
	if ((cont>9)&&(cont<=19)){
		printf("VOCE VAI SER ENCAMINHADO PARA ALA DE: MÉDIO RISCO\n");
		fprintf(saida,"VOCE VAI SER ENCAMINHADO PARA ALA DE: MÉDIO RISCO\n");	
	}
	if (cont>19){
		printf("VOCE VAI SER ENCAMINHADO PARA ALA DE: ALTO RISCO\n");
		fprintf(saida,"VOCE VAI SER ENCAMINHADO PARA ALA DE: ALTO RISCO\n");	
	}
	printf("--------------------------------------\n");
	fclose (saida);
	system("pause");
	system("CLS");

	return 0;
}
