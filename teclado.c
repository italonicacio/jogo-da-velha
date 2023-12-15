#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "teclado.h"

int pegar_comando_teclado(){

	int comando;
	comando = getch();
	switch(comando)
	{
		case 72:
			return CIMA;
			
		case 75:
			return ESQUERDA;
			
		case 80:
			return BAIXO;
			
		case 77:
			return DIREITA;
		case 13: 
			return ENTER;
			
		default:
			return DESCONHECIDO;
			
	}
}