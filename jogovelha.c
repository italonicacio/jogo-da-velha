#include <stdio.h>
#include <stdlib.h>
#include "teclado.h"
#include "jogovelha.h"

void aloca_tabuleiro(jogovelha *c){

	int i,j;
	c->n = 3;
	/*alocando tabuleiro 3x3*/
	c->tabuleiro = (int **) malloc(c->n * sizeof(int*));
	
	for (i = 0; i < 3; ++i)
	{
		c->tabuleiro[i] = (int *) malloc(c->n * sizeof(int));
		
	}

	/*colocar vazio*/

	for (i = 0; i < c->n; ++i)
	{	
		for (j = 0; j < c->n; ++j)
		c->tabuleiro[i][j] = 0;
		
	}
	c->lincursor = 0;
	c->colcursor = 0;

}

void imprimi_tabuleiro(jogovelha *c){
	int i,j;
	system("cls");
	for (i = 0; i < c->n; ++i){
		for (j = 0; j < c->n; ++j){
			switch(c->tabuleiro[i][j]){
				case VAZIO:
					if ((c->lincursor == i) && (c->colcursor == j))
					{
						printf("[ ]");
					}else{
						printf("   ");
					}
					break;
				case JOGADOR_O:
					if ((c->lincursor == i) && (c->colcursor == j))
					{
						printf("[O]");
					}else{
						printf(" O ");
					}
					break;
				case JOGADOR_X:
					if ((c->lincursor == i) && (c->colcursor == j))
					{
						printf("[X]");
					}else{
						printf(" X ");
					}
					break;




			}
			if(j < c->n - 1){
				printf("|");
			}
		}
		printf("\n");
		if (i < c->n -1){
			printf("---+---+---\n");
		}

	}




}

void atualiza_tabuleiro(jogovelha *c, int comando){
	int lin = c->lincursor;
	int col = c->colcursor;

	switch(comando){
		case CIMA:
			--lin;
			break;
		case BAIXO:
			++lin;
			break;
		case ESQUERDA:
			--col;
			break;
		case DIREITA:
			++col;
			break;
	}
	if ((col < 0) || (col>=c->n) || (lin<0) || (lin >=c->n) ){
		c->colcursor = col;
		c->lincursor = lin;
		imprimi_tabuleiro(c);
	}
}