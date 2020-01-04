#include <stdio.h>
#include <stdlib.h>

int subtracao(int x, int y){
return x-y;
}

int main(){

int x,y;

	printf("Digite x: ");
	scanf("%d",&x);

	printf("Digite y: ");
	scanf("%d",&y);

	printf("\nA subtracao é %d\n",subtracao(x,y));

return 0;
}
