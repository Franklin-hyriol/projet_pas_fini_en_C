#include <stdio.h>
#include <stdbool.h>
#include <creaco.h>
#include "un.h"
#include "deux.h"
#include "trois.h"
#include "quatre.h"
#include "cinq.h"

#define langeur_ecran 84
#define hauteur_ecran 24
#define frame 65

int main(){

	show_cursor(false);
	title_console("STAR WARS");
	if(!resize_console(langeur_ecran, hauteur_ecran)){
		printf("Impossible de redimentionner l'ecran\n");
		getchar();
		exit(EXIT_FAILURE);
	}


	int a = 0;////////////////////////////un
		while(a <= 70){
		Sleep(frame);
		system("cls");
		if(a<=40){
			set_color(2);
		}else{
			set_color(4);
		}
		un(a);
		a++;
	}
	

	int b = 0;//////////////////////////////deux
	while(b <= 49){
		Sleep(frame);
		system("cls");
		if(b<=14){
			set_color(15);

		}else if(b > 14 && b <= 28){
			set_color(14);
		}else{
			set_color(6);
		}
		deux(b);
		b++;
	}



	int c = 0;//////////////////////////////////trois
	while(c <= 88){

		Sleep(frame);
		system("cls");

		if(c<=39){
			set_color(6);
		}else{
			set_color(15);
		}
		trois(c);
		c++;
	}


	int d = 0; ///////////////////////////////quatre
		while(d <= 483){

		Sleep(frame);
		system("cls");
		set_color(6);
		quatre(d);
		d++;
	}

	int e = 0;

	while(e<=129){
		Sleep(frame);
		system("cls");
		set_color(6);
		cinq(e);
		e++;
	}

set_color(15);
show_cursor(true);
}