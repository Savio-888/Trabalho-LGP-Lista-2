#include<stdio.h>
int main(){
	int i,j,x,p=2;
	printf("Os 12 primeiros numeros primos sao:\n");
	for(i=0;i<=11;++p){ 
	x=0;
		for(j=1;j<=p;++j){
			if(p%j==0){
				++x;
			}
			}
		if(x==2){
			printf("%d\n", p);
			i++;
		}
	}
	return 0;
}
