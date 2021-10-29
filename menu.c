#include "SlotMachine.h"

void menu() {
	char n=NULL;
	
	do {
		if (n == 'y'){
			logic();
		}
	} while (printf("Ready to play\t") && scanf("%c", &n) != 1 || n != 'n');
	printf("Casino always win!");
}
