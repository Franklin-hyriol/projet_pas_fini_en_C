#include <stdio.h>
#include <stdbool.h>
#include <creaco.h>
#include "cinq.h"

#define langeur_ecran 84
#define hauteur_ecran 24
#define frame 65

int main(void){
	show_cursor(false);
		title_console("STAR WARS");
	if(!resize_console(langeur_ecran, hauteur_ecran)){
		printf("Impossible de redimentionner l'ecran\n");
		getchar();
		exit(EXIT_FAILURE);
	}
	int a = 1;
	while(!a == 0){
	printf("entrer un nombre: ");
	scanf("%d", &a);
	system("cls");
	cinq(a);
	}

	int b = 0;

	while(b <= 129){
		Sleep(frame);
		system("cls");
		set_color(15);
		cinq(b);
		b++;
	}
show_cursor(true);
return 0;
}



