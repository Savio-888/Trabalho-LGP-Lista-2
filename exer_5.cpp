#include<stdio.h>
int main(){
	int idade;
	printf("Escolha uma idade de 1 a 3 anos para verificar:\n");
	scanf("%i", &idade);
	if(idade==1){
		printf("Pesos provaveis: \n Meninos: 8.5 kg a 12.5kg \n Meninas: 7.5kg a 11.5kg\n");
	}
	if(idade==2){
		printf("Pesos provaveis: \n –Meninos: 10.1 kg a 15.2kg \n Meninas: 9.8kg a 14.5kg \n");
	}
	if(idade==3){
		printf("Pesos provais:\n –Meninos: 11.7 kg a 18 kg \n Meninas: 11.4kg a 17.950kg\n");
	}
	return 0;
	
}
