#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota, alta, baixa, soma, media, porcentagem;
	scanf("%f", &nota);
	baixa=0;
	alta=0;
	soma=0;
	if(nota<0){
		exit(0);
	}
	while(nota>=0){
		soma=soma + nota;
		if(nota<5){
			baixa++;
		}
		else{
			alta++;
		}
		scanf("%f", &nota);
	}
	media=soma/(baixa+alta);
	porcentagem=alta/(baixa+alta)*100;

  printf("%f %f %f %f", alta, baixa, media, porcentagem);
}