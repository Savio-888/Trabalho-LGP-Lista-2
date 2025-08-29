#include<stdio.h>
#include <locale.h>

int a, v;

void analize(){
 if(a%2==0){
 	v = 0;
 }
 else{
 	v = 1;
 }
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um número inteiro:\n");
	scanf("%d", &a);
	analize();
	if(v==0){
		printf("O valor de %d é %d & ele é par", a, v);
	}
	else{
		printf("O valor de %d é %d & ele é impar", a, v);
	}
	
return 0;
}
