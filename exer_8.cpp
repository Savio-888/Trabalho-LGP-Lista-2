#include <stdio.h>
#include <string.h>
 
int main (){ 
	int soma, i, x=1;
	
	for(i=0; i<199; i++){
		printf("1/%d+", x);
		soma+=1/x;
		++x;
	}
	printf("1/%d", x);
	printf("\nO resultado e: %d", soma);

	return 0;
}
