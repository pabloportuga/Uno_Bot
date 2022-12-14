#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 100
#define MAX_ACTION 10
#define MAX_ID_SIZE 10

void debug(char *message) {
  fprintf(stderr, "%s\n", message);
}

typedef struct{ // cada carda tem um número e um naipe
	char numberCard;
	char *suitCard; // o naipe é string
}card;

typedef struct{ // cada mão tem um numero de cartas e as 2 informações de cada carta
	int nCards;
	card *playerCards;
}hand;

typedef struct{ // cada jogador tem 1 id e uma mão com um determinado numero de cartas
	char id[MAX_ID_SIZE];
	hand playerHand;
}player;

player players_setup(char *string){
	int i = 0, length;
	char substring;
	player *array;

	substring = strtok(string, " ");

	while(substring != NULL){
		if(i ==0){
			array = malloc(sizeof(player));
			strcpy(array[i].id, substring); // coloca b1 em array[0].id
			i++;
		}
		else{
			array = realloc(array, sizeof(player)*(i+1));
			strcpy(array[i].id, substring); // coloca b2 e b3 em 1 e 2 respectivamente;
			i++;
		}
		substring = strtok(NULL, " ");
	}
	return array;
}



hand hand_setup(char *string){
	hand array;
	card i;
	char *substring;
	int length, j = 0;

	substring = strtok(string, " ");
	while(substring != NULL){
		strcpy()
	}

}


int main(){
	setbuf(stdin, NULL);  
    setbuf(stdout, NULL);  
    setbuf(stderr, NULL);

    player *players;

    char temp[MAX_LINE]; 
    scanf("PLAYERS %[^\n]\n", temp); // PLAYERS b1 b2 b3
    debug(temp);
    players = players_setup(temp);
    
    scanf("YOU %s\n", my_id); // Meu bot, nesse caso vai ser o b1
    debug(my_id);

    scanf("HAND %[^\n]\n", temp);
    debug(temp); 

    hand myHand;
    myHand = hand_setup(temp); // [ 4♥ 7♦ 2♣ J♠ A♥ 3♦ 2♣ 9♠ ] agora vou salvar esses cartas na minha mão



    return 0;
}