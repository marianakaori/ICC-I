#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, soma;
	scanf("%d %d", &x, &y);
	soma=x;
	if(y<x){
		exit(0);
	}
	while(x<y){
		++x;
		soma=soma+x;
	}
	printf("%d", soma);
}