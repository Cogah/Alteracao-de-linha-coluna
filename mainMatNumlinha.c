#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int m[4][3];
	int i,j,x,y;
	char esc;
	
	for(i = 0; i < 4;i++){
		for(j=0;j<3;j++){
			m[i][j] = i+1;
			printf("[%d]",m[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEscolha uma linha ou coluna para adicionar valores\n");
	printf("Linha(L) ou Coluna(C)?\nEscolha: ");
	scanf(" %c", &esc);
	esc = toupper(esc);
	printf("Digite o valor de X: ");
	scanf("%d", &x);

	if(esc == 'L'){
		printf("Escolha a linha: ");
		scanf("%d", &y);
		y = y-1;
			for(j=0;j<3;j++){
				m[y][j] = x;
			}
	
		for(i = 0; i < 4;i++){
			for(j=0;j<3;j++){
				printf("[%d]",m[i][j]);
			}
			printf("\n");
		}
	}
	else if(esc == 'C'){
		printf("Escolha a coluna: ");
		scanf("%d", &y);
		y = y-1;
	
		for(i=0;i<4;i++){
			m[i][y] = x;
		}
		for(i = 0; i < 4;i++){
			for(j=0;j<3;j++){
				printf("[%d]",m[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}