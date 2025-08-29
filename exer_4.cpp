#include <stdio.h>
#include <math.h>

int main(){
	int X, x1, x2, x3;
	int Y, y1, y2, y3;
	int z1, z2, z3;
	int i=0;
	printf("Entre com o valor de X: ");
	scanf("%d", &X);
	while(i<1){
		if(X > 99 && X < 1000){
			x1 = X / 100;
			x2 = (X / 10) % 10;
			x3 = X % 10;
			i++;
		}
		else{
			printf("O numero digitado deve estar entre 100 e 999!!\n");
			scanf("%d", &X);
		}
	}
	i = 0;
printf("Entre com o valor de Y: ");
	scanf("%d", &Y);
	while(i<1){
		if(Y > 99 && Y < 1000){
			y1 = Y / 100;
			y2 = (Y / 10) % 10;
			y3 = Y % 10;
			i++;
		}
		else{
			printf("O numero digitado deve estar entre 100 e 999!!\n");
			scanf("%d", &Y);
		}
	}
	z1 = (x1 * y1) % 10;
	z2 = (x2 * y2) % 10;
	z3 = (x3 * y3) % 10;
	printf("O produto de digito a digito entre %d e %d e: [%d%d%d]", X, Y, z1, z2, z3);
	return 0;
}
