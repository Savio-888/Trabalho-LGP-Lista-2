#include<stdio.h>

int main()
{
    char placa[4];
    int rod;
    printf("Digite o numero da placa (4 digitos): ");
    scanf("%s", placa);
    rod=placa[3]-48;
    if(rod==1 || rod==2) printf("Nao circular segunda-feira");
    if(rod==3 || rod==4) printf("Nao circular terca-feira");
    if(rod==5 || rod==6) printf("Nao circular quarta-feira");
    if(rod==7 || rod==8) printf("Nao circular quinta-feira");
    if(rod==9 || rod==0) printf("Nao circular sexta-feita");
    return 0;
}
