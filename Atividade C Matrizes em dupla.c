#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	char disciplinas[3][200];
	float notas[3][3], mediaCada[3];
	int soma = 0
	
	//Dados do usuário.
	int x = 0;
	int y;
	
	printf("Digite três disciplinas e suas três notas.");
	
	for(x = 0; x < 3; x++){
		
		printf("\nDigite o nome da %iº disciplina: ", x + 1);
		scanf("%s", &disciplinas[x]);
	
	for(y = 0; y < 3; y++){
		
		printf("\nDigite a %iº nota: ", y + 1);
		scanf("%f", &notas[x][y]);
		fflush(stdin);
		
	do{
		
		if(notas[x][y] > 10 || notas[x][y] < 0){
			printf("\nDigite números acima de (0) e abaixo de (10).");
		}
		
	}while(notas[x][y] > 10 || notas[x][y] < 0);

	soma += notas[x][y];	
   }
 
	mediaCada[x] = soma / y;	
	soma = 0;
}
	
	
	system("cls");
	//Resultados.
	printf("---Resultados---");
	for(x = 0; x < 3; x++){
		printf("\nNome da %iº disciplina: %s", x + 1, disciplinas[x]);
		
		for(y = 0; y < 3; y++){
			printf("\n%iº nota: %.1f", y + 1, notas[x][y]);
		}
		
		printf("\nMédia: %.1f", mediaCada[x]);
	}
	
	
	
	return 0;	
}
