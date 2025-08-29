#include <stdio.h>

int main(){

    int Y[4]={0}, i;
    char X[3];
    printf("Digite X (3 numeros): ");
    scanf("%s", X);7
    for(i=0;i<3;i++){
        Y[i]=X[i]-48;
    }
    for(i=1; i<4; i++){
        Y[3]+=((7-i)*Y[i-1]);
    }
    Y[3]=9-Y[3]%10;
    printf("ultimo digito do codigo: %d", Y[3]);
    printf("\nSenha: ");
    for(i=0; i<4; i++){
        printf("%d", Y[i]);
    }
    return 0;
}
