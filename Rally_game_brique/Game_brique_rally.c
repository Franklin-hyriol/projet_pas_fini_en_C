#include <stdio.h>
#include <stdlib.h>
#include <creaco.c>

#define false 0
#define true 1

int coor_x_voiture = 19;
int coor_y_voiture =0;
int vitesse = 0;

void voitre_1(int a, int b);
//void voitre_4(int a, int b);
//void voiture_detruit(int a, int b);
void Deplacement();
void vie(int a);
void affiche();
void affiche_cadre();
void menu();
void quiter();



int main(void){
	system("cls");
	affiche_cadre();
	gotoxy(20, 5);
	set_color(252);
	printf("NFS ASCII C:\\>");
	menu();


return 0;
}

/*-----------------------------------------------------------------------------------*/

void affiche(){
	show_cursor(false);
////////////////////////////////////cadre du jeux
	system("cls");
	set_color(12);
	printf("\n\n\t\tNFS ASCII BY FRANKLIN HYRIOL");
	set_color(7);
	printf("\n");
	printf("\t______________________________________________\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |          |       |\n");
	printf("\t|       |                 |  ______  |       |\n");
	printf("\t|       |                 | |      | |       |\n");
	printf("\t|       |                 | |      | |       |\n");
	printf("\t|       |                 | |      | |       |\n");
	printf("\t|       |                 | | _____| |       |\n");
	printf("\t|       |                 |          |       |\n");		
	printf("\t|       |                 |          |       |\n");	  
	printf("\t|       |                 |          |       |\n");     
	printf("\t|       |                 |          |       |\n");    
	printf("\t|       |                 |   ,-.    |       |\n");	
	printf("\t|       |                 | _(*_*)_  |       |\n");   
	printf("\t|       |                 |(_  o  _) |       |\n");	
	printf("\t|       |                 |  / o \\   |       |\n");   	  
	printf("\t|       |                 | (_/ \\_)  |       |\n");								
	printf("\t|       |=================|==========|       |\n");
	printf("\t|_______|____________________________|_______|");

//////////////////////////////////////////décoration 32 printf :) hahaha
	set_color(15);
	gotoxy(13,27);
	printf("x - v : Deplacement");
	gotoxy(34,27);
	printf("c: acceleration");


	
	set_color(9);               
	gotoxy(10, 5);               
	printf("##");      	        
	gotoxy(10, 6);            	
	printf("###");     	        
	gotoxy(10, 7);            	
	printf("##");      	        

    set_color(10);               
    gotoxy(10, 9);                
	printf("##");      	         
	gotoxy(10, 10);               
	printf("####");    	         
	gotoxy(10, 11);               
	printf("  ##");    	         

    set_color(12);               
    gotoxy(10, 13);               
	printf("####");    	         
	gotoxy(10, 14);               
	printf("####");    	         
	gotoxy(10, 15);               
	printf("####");    	         

    set_color(13);               
    gotoxy(10, 17);               
	printf("####");    	         
	gotoxy(10, 18);               
	printf("##");      	         
	gotoxy(10, 19);               
	printf("##");      	         

    set_color(14);               
    gotoxy(12, 21);               
	printf("##");      			 
	gotoxy(12, 22);               
	printf("##");      			 
	gotoxy(12, 23);               
	printf("##");      	         
	gotoxy(12, 24);               
	printf("##"); 


     ////////////

	set_color(9);
	gotoxy(49, 5);
	printf(" ##");
	gotoxy(49, 6);
	printf("###");
	gotoxy(49, 7);
	printf(" ##");

	set_color(10);
	gotoxy(48, 9);
	printf("  ##");
	gotoxy(48, 10);
	printf("####");
	gotoxy(48, 11);
	printf("##");

	set_color(12);
	gotoxy(48, 13);
	printf("####");
	gotoxy(48, 14);
	printf("####");
	gotoxy(48, 15);
	printf("####");

	set_color(13);
	gotoxy(48, 17);
	printf("####");
	gotoxy(48, 18);
	printf("  ##");
	gotoxy(48, 19);
	printf("  ##");

	set_color(14);
	gotoxy(48, 21);
	printf("##");
	gotoxy(48, 22);
	printf("##");
	gotoxy(48, 23);
	printf("##");
	gotoxy(48, 24);
	printf("##");

/////////////////////////////////////////level,speed,score,hi-score et vie

	gotoxy(36,16);
	set_color(10);
	printf("LEVEL ");
	gotoxy(42, 16);
	set_color(9);
	printf("01");
	gotoxy(36, 18);
	set_color(10);
	printf("SPEED ");
	gotoxy(42, 18);
	set_color(9);
	printf("01");


	gotoxy(37, 5);
	set_color(10);
	printf("SCORE");
	gotoxy(38, 6);
	set_color(9);
	printf("0134");


	gotoxy(36, 8);
	set_color(10);
	printf("HI-SCORE");
	gotoxy(38, 9);
	set_color(9);
	printf("2321");

	vie(0);
	
/////////////////////////////////////////route
	int coor_route_x = 17;
    int coor_route_y = 4;
	set_color(14);
	gotoxy(coor_route_x,coor_route_y);
	printf("H               H\n");
	gotoxy(coor_route_x,coor_route_y+1);
	printf("H               H\n");
	gotoxy(coor_route_x,coor_route_y+2);
	printf("H               H\n");

	gotoxy(coor_route_x,coor_route_y+4);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+5);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+6);
	printf("H               H\n");

	gotoxy(coor_route_x, coor_route_y+8);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+9);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+10);
	printf("H               H\n");

	gotoxy(coor_route_x, coor_route_y+12);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+13);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+14);
	printf("H               H\n");

	gotoxy(coor_route_x, coor_route_y+16);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+17);
	printf("H               H\n");
	gotoxy(coor_route_x, coor_route_y+18);
	printf("H               H\n");



	voitre_1(coor_x_voiture, coor_y_voiture);
	Deplacement();

/////////////////////////////////////////////////
}

/*------------------------------------------------------------------*/

void menu(){
	int choix_menu = 0;
	gotoxy(14, 8);
	set_color(10);
	printf("1->Nouvelle partie\n");
	gotoxy(15, 9);
	set_color(10);
	printf("2->speed\n");
	gotoxy(16, 10);
	set_color(10);
	printf("3->Level\n");
	gotoxy(17, 11);
	set_color(10);
	printf("4->Quiter\n");
	gotoxy(19, 13);
	set_color(11);
	printf("Votre choix: ");
	scanf("%d", &choix_menu);

	switch(choix_menu){
		case 1:
			affiche();
			break;
		case 2:
			printf("\n");
			break;
		case 3:
			printf("\n");
			break;
		case 4:
			quiter();
			break;
	}
}

/*-----------------------------------------------------*/


void quiter(){
	printf("\n");
}


/*---------------------------------------------------------*/


void affiche_cadre(){
	printf("\n\n");
	set_color(14);
	printf("\t   ______________________________\n");
	printf("\t / \\                             \\.\n");
	printf("\t|   |                            |.\n");
	printf("\t \\_ |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
    printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |                            |.\n");
	printf("\t    |   _________________________|___\n");
	printf("\t    |  /                            /.\n");
	printf("\t    \\_/____________________________/.\n");
}

/*------------------------------------------------------------*/

void voitre_1(int a, int b){

	set_color(13);
	gotoxy(a, 20);
	printf("  ##  ");
	gotoxy(a, 21);
	printf("######");
	gotoxy(a, 22);
	printf("  ##  ");
	gotoxy(a, 23);
	printf("##  ##");


	set_color(11);
	gotoxy(26,16);
	printf("  ##  ");
	gotoxy(26,17);
	printf("######");
	gotoxy(26,18);
	printf("  ##  ");
	gotoxy(26,19);
	printf("##  ##");

	set_color(11);
	gotoxy(26,8);
	printf("  ##  ");
	gotoxy(26,9);
	printf("######");
	gotoxy(26,10);
	printf("  ##  ");
	gotoxy(26,11);
	printf("##  ##");



}

/*-------------------------------------------------------------*/



/*-------------------------------------*/

void vie(int a){
	set_color(13);
	gotoxy(37,11);
	printf("#");
	gotoxy(37,12);
	printf("#");
	gotoxy(37,13);
	printf("#");
	gotoxy(37,14);
	printf("#");
}

void Deplacement(){
	int val;
	do{
		while(kbhit()){
			val = getch();
			switch(val){
				case 'x':
					coor_x_voiture-=7;
					if(coor_x_voiture <= 19) coor_x_voiture = 19;
					affiche();
				 	break;
				case 'v':
					coor_x_voiture+=7;
					if(coor_x_voiture >= 26) coor_x_voiture = 26;
					affiche();
					break;
				case 'c':
					vitesse+=100;
					affiche();
					break;
			}
		}

	}while(1);
}