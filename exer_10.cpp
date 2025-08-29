#include<stdio.h>
#include <locale.h>
#include <string.h>

int i, m1[50], m2[50], m3[50], m4[50], me[50];
char aluno[50][80];

void ler(){
	
	for(i=0; i<=49; ++i){
	printf("Insira o nome do aluno %d:\n", i+1);
	scanf("%4[^\n]s", &aluno[i]);
	fflush(stdin);
	printf("Insira as notas de %s:\n", aluno[i]);
	scanf("%d", &m1[i]);
	scanf("%d", &m2[i]);
	scanf("%d", &m3[i]);
	scanf("%d", &m4[i]);
	fflush(stdin);
    } 
	
}

void calc(){
	for(i=0; i<=49; ++i){
	 me[i] = (m1[i]+m2[i]+m3[i]+m4[i])/4;
	}
}

void pesq(){
	int a, j, n;
    printf("\nInsira uma nota a ser pesquisada: \n");
	scanf("%d", &n);
	j=0;
	a=0;
	while (j<=49 && a==0 ){
		if (me[j]==n){
		 a=1;
		 }
		else {
		 j = j + 1;
		 }
		
		if (a==1){
		 printf("\n Essa nota pertence à \n");
		 for(i=0;i<=4;++i){
		 	if(me[i]== n){
		 		printf("%s\n", aluno[i]);
			 }
		 }	
		 
		if (me[j] > 4){
		 printf("\n Esse(s) aluno(s) esta(ão) APROVADO(S)");
		 }
		else{
		 printf("\n  Esse(s) aluno(s) esta(ão) REPROVADO(S)");
		 }
		
		}
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	ler();
	calc();
	pesq();
	
	return 0;
}
