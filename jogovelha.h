#define VAZIO 0
#define JOGADOR_O 1
#define JOGADOR_X 4

typedef struct jogo_da_velha
{
	int **tabuleiro;
	int n;
	int lincursor;
	int colcursor;

}jogovelha;


void aloca_tabuleiro(jogovelha *c);

void imprimi_tabuleiro(jogovelha *c);

void atualiza_tabuleiro(jogovelha *c, int comando);
