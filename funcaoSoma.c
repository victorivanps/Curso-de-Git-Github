#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
return x+y;
}

int main(){

	int x,y;

	printf("Digite x: ");
	scanf("%d",&x);

	printf("Digite y: ");
	scanf("%d",&y);

	printf("\nA soma é %d\n",soma(x,y));


	return 0;
}
