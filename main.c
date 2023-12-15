#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "jogovelha.c"
#include "teclado.c"

int main()
{
	
	jogovelha c;
	
	printf("APERTE ENTER PARA COMECAR O JOGO.\n");
	getch();
	

	
	

	aloca_tabuleiro(&c);
	imprimi_tabuleiro(&c);

	while(1){
		int comando;
		comando = pegar_comando_teclado();
		atualiza_tabuleiro(&c, comando);
	}

	return 0;
}