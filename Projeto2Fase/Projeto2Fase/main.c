/* MINI-PROJETO 2 ATAD 2018
* Identificacao dos Alunos:
*
*      Numero: 170221006 | Nome: Andr� dos Santos Martins Ribeiro
*      Numero: 170221026 | Nome: Daniel Alexandre Lopes Alves
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "commands.h"
#include "statistics.h"
#include "input.h"

//#include "commands.h"

/* definicao de prototipos de funcoes, definidas depois do main() */
void printCommandsMenu();
void stringToUpper(char * str);

/*
* Este e a estrutura responsavel pelo metodo main onde corre o programa em si. Mostra o menu de comandos que o utilizador pode efetuar, de seguida efetua os escolhidos
* O procedimento main chama funcoes para desenvolver a acao pretendida.
*/
int main(int argc, char** argv) {

	/* declaracao de variaveis */
	PtList list= listCreate(300);


	/* interpretador de comandos */
	char command[21];
	int quit = 0;
	while (!quit) {

		printCommandsMenu();
		fgets(command, sizeof(command), stdin);
		/* descartar 'newline'. Utilizar esta t�cnica sempre que for lida uma
		* string para ser utilizada, e.g., nome de ficheiro, chave, etc.. */
		command[strlen(command) - 1] = '\0';

		if (equalsStringIgnoreCase(command, "QUIT")) {
			quit = 1; /* vai provocar a sa�da do interpretador */
		}
		else if (equalsStringIgnoreCase(command, "LOAD")) {
			commandLoad(list);
		}
		else if (equalsStringIgnoreCase(command, "CLEAR")) {
			commandClear(list);
		}
		else if (equalsStringIgnoreCase(command, "SHOW")) {
			commandShow(list);
		}
		else if (equalsStringIgnoreCase(command, "SORT")) {
			commandSort(list);
		}
		else if (equalsStringIgnoreCase(command, "AVG")) {
			//commandMFoulP(&statsList, &playerList); /* chama a funcao MFoulP depois de passar por algumas verificacoes */
		}
		else if (equalsStringIgnoreCase(command, "NORM")) {
			//commandFairPlay(&statsList, &playerList); /* chama a funcao FairPlay depois de passar por algumas verificacoes, tal como ambas as listas, statsList e playersList terem jogadores e estatisticas */
		}
		else if (equalsStringIgnoreCase(command, "TYPE")) {
			//commandIdealTeam(&statsList, &playerList); /* chama a funcao IdealTeam depois de passar por algumas verificacoes, tal como ambas as listas, statsList e playersList terem jogadores e estatisticas */
		}
		else if (equalsStringIgnoreCase(command, "CHECHTYPE")) {
			//commandIdealTeam(&statsList, &playerList); /* chama a funcao IdealTeam depois de passar por algumas verificacoes, tal como ambas as listas, statsList e playersList terem jogadores e estatisticas */
		}
		else if (equalsStringIgnoreCase(command, "KMEANS")) {
			//commandIdealTeam(&statsList, &playerList); /* chama a funcao IdealTeam depois de passar por algumas verificacoes, tal como ambas as listas, statsList e playersList terem jogadores e estatisticas */
		}
		else {
			printf("Comando nao encontrado.\n"); /* Caso nao seja encontrado na cadeia de if-else a cima, e mostrada uma mensagem de erro a dizer que o comando nao foi encontrado */
		}
	}

	/* libertar mem�ria e apresentar mensagem de sa�da. */

	listDestroy(&list);


	printf("FECHADO COM SUCESSO\n"); /* Mostra uma mensagem de saida */
	return (EXIT_SUCCESS);
}


//FALTA UPDATE
void printCommandsMenu() { /* Menu do utilizador */
	printf("\n===================================================================================");
	printf("\n                          MINI-PROJECT: Basket Scores                              ");
	printf("\n===================================================================================");
	printf("\nA. Info (LOAD, SHOW, CLEAR, SEARCH).");
	//printf("\nB. Specific info about players' performance during the games (LOADG, SEARCHG, MVP).");
	printf("\nC. Aggregated info about games and players (SORT, AVG, NORM, TYPE).");
	printf("\nD. Advanced indicator (KMEANS, CHECKTYPE)");
	printf("\nE. Exit (QUIT)\n\n");
	printf("COMMAND> ");
}
