#include <stdio.h>
#include <string.h>
 
int main (){
	int i;
	char senha[4], codigo[4];
	
	printf("Insira a senha de 4 digitos: ");
	scanf("%s", &senha);
	
	for(i=0; i<4; i++){
		codigo[i]=senha[i]-48;
		codigo[i]=(codigo[i]+7)%10;
	}
        printf("A senha (X) %s  codificada (Y) e ", senha);
        for(i=0; i<4;i++){
		printf("%d",  codigo[i]);
	}
    return 0;
}
