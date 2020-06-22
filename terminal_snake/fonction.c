#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include "prototipe.h"
#include <creaco.h>
//////////////////////////////////////////preparation_console
#define SPEED_MAX 9
#define LEVELS_MAX 9
#define largeur_console 100
#define hauteur_console 28

#define droit 77
#define bas 80
#define gauche 75
#define haut 72
#define snake_max 500



 int speeds = 1;
 int levels = 1;
 char sonds[5] = ":-)";
 int sond_valeur = 1;
 int position_nouriture_x = 50;
 int position_nouriture_y = 15;
 int position_x_snake = 30;
 int position_y_snake = 10;
 int score = 0;



void preparation_console(){
		show_cursor(false);
		if(!resize_console(largeur_console, hauteur_console)){
		printf("Inpossible de redimentionner la console\n");
		getchar();
		exit(EXIT_FAILURE);
	}

	CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
	fill_chb(preparation, ' ', 9);
	clear_chb(preparation);
	show_to_console(preparation, 0, 0);
}


////////////////////////////////////////////////////////animation



void animatiom(){
	set_color(15);
	int position = 14;
/////////////////////////////////////////animation
	///////////////////////////////// S
	set_color(66);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");



/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");


//////////////////////////////////////////7 K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");








Sleep(500);
	///////////////////////////////// S
	set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(96);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");



/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");


//////////////////////////////////////////7 K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");







Sleep(500);
		   	///////////////////////////////// S
	set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");



/////////////////////////////////////// A
    set_color(160);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");


//////////////////////////////////////////7 K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");






Sleep(500);
		   	///////////////////////////////// S
	set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");



/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");


//////////////////////////////////////////7 K
    set_color(144);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");





Sleep(500);
		   	///////////////////////////////// S
	set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");



/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");


////////////////////////////////////////// K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(208);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");

//////////////////////////////////////////////////// S

Sleep(200);
////////////////////////////////////////// S
		   		set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");


/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");



//////////////////////////////////////////7 K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");






/////////////////////////////////////////////affiche
Sleep(1000);

 ///////////////////////////////////////// S		
		set_color(66);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(96);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");


/////////////////////////////////////// A
    set_color(160);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");



//////////////////////////////////////////7 K
    set_color(144);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(208);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");




Sleep(200);
////////////////////////////////////////// S
		   		set_color(15);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(15);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");


/////////////////////////////////////// A
    set_color(15);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");



//////////////////////////////////////////7 K
    set_color(15);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(15);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");



Sleep(1000);
///////////////////////////////////////////////////// S
		   		set_color(66);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(96);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");


/////////////////////////////////////// A
    set_color(160);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");



//////////////////////////////////////////7 K
    set_color(144);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(208);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");
	
	gotoxy(0, hauteur_console-1);
	set_color(4);
	printf("By Franklin Hyriol");
set_color(15);
}


/////////////////////////////////////////////////



void titre_dans_le_menu(){
	int position = 14;
		   		set_color(66);
		   gotoxy(2+position,2);
	       printf("           ");
	       gotoxy(2+position,3);
		   printf("           ");
		   gotoxy(2+position,4);
		   printf("           ");
		   gotoxy(2+position,5);
	       printf("  ");
	       gotoxy(2+position,6);
		   printf("           ");
		   gotoxy(2+position,7);
		   printf("           ");
		   gotoxy(11+position,8);
		   printf("  ");
		   gotoxy(2+position,9);
		   printf("           ");
		   gotoxy(2+position,10);
		   printf("           ");


/////////////////////////////////////////// N
    set_color(96);
		   gotoxy(14+position,2);
		   printf("    ");
		   gotoxy(24+position,2);
		   printf("   ");
		   gotoxy(14+position,3);
		   printf("     ");
		   gotoxy(24+position, 3);  
		   printf("   ");
		   gotoxy(14+position,4);
		   printf("      ");
		   gotoxy(24+position, 4);  
		   printf("   ");
		   gotoxy(14+position,5);
		   printf("       ");
		   gotoxy(24+position, 5);  
	       printf("   ");
	       gotoxy(14+position,6);
	       printf("        ");
	       gotoxy(24+position, 6);  
		   printf("   ");
		   gotoxy(14+position,7);  
		   printf("             ");
		   gotoxy(14+position,8);
		   printf("   ");
		   gotoxy(20+position, 8);  
		   printf("       ");
		   gotoxy(14+position,9);
		   printf("   ");
		   gotoxy(21+position, 9); 
		   printf("      ");
		   gotoxy(14+position,10);
		   printf("   ");
		   gotoxy(22+position, 10);  
		   printf("     ");


/////////////////////////////////////// A
    set_color(160);
           gotoxy(28+position, 2);
	       printf("             ");
	       gotoxy(28+position,3);
		   printf( "             ");
		   gotoxy(28+position,4);
		   printf("     ");
		   gotoxy(36+position, 4);
		   printf( "     ");
		   gotoxy(28+position,5);
		   printf( "             ");
		   gotoxy(28+position,6);
		   printf( "             ");
		   gotoxy(28+position,7);
		   printf( "             ");
		   gotoxy(28+position,8);
		   printf( "             ");
		   gotoxy(28+position,9);
		   printf("    ");
		   gotoxy(37+position, 9);
           printf( "    ");
           gotoxy(28+position,10);
           printf("    ");
           gotoxy(37+position, 10);
           printf( "    ");



//////////////////////////////////////////7 K
    set_color(144);
           gotoxy(42+position,2);
           printf("    ");
           gotoxy(51+position, 2);
	       printf("   ");
	       gotoxy(42+position,3);
	       printf("    ");
	       gotoxy(49+position, 3);
		   printf("    ");
		   gotoxy(42+position,4);
		   printf("         ");
		   gotoxy(42+position,5);
		   printf("       ");
		   gotoxy(42+position,6);
	       printf("     ");
	       gotoxy(42+position,7);
		   printf("       ");
		   gotoxy(42+position,8);
		   printf("         ");
		   gotoxy(42+position,9);
		   printf("    ");
		   gotoxy(49+position, 9);
		   printf("    ");
		   gotoxy(42+position,10);
		   printf("    ");
		   gotoxy(51+position, 10);
		   printf("    ");


/////////////////////////////////////////// E
    set_color(208);
           gotoxy(56+position, 2);
	       printf("             ");
	       gotoxy(56+position, 3);
		   printf("             ");
		   gotoxy(56+position,4);
		   printf("  ");
		   gotoxy(56+position,5);
		   printf("         ");
		   gotoxy(56+position,6);
		   printf("         ");
		   gotoxy(56+position,7);
		   printf("         ");
		   gotoxy(56+position,8);
		   printf("  ");
		   gotoxy(56+position,9);
		   printf("             ");
		   gotoxy(56+position,10);
		   printf("             ");
	
	gotoxy(0, hauteur_console-1);
	set_color(4);
	printf("By Franklin Hyriol");
set_color(15);

}
 




 ////////////////////////////////////////////menu
int menu(){
	bool dans_le_menu = true;
	int chois_menu = 0;
	int position = 14;
	titre_dans_le_menu();


	while(dans_le_menu){
		Sleep(10);
  		poll_event();
		if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 12 && mouse_y() < 16){
			
			set_color(10);
			gotoxy(40, 13);
			printf("-----------------------");
			gotoxy(40, 14);
			printf("|   NOUVELLE PARTIE   |");
			gotoxy(40, 15);
			printf("-----------------------");
			if(clic_pressed(1)){
				jeux();
			}
			
		}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 16 && mouse_y() < 20){
			    
				set_color(6);
				gotoxy(40, 17);
				printf("-----------------------");
				gotoxy(40, 18);
				printf("|       OPTIONS       |");
				gotoxy(40, 19);
				printf("-----------------------");
			if(clic_pressed(1)){
				option();
			}
				
		}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 20 && mouse_y() < 24){
			    
				set_color(4);
				gotoxy(40, 21);
				printf("-----------------------");
				gotoxy(40, 22);
				printf("|       QUITTER       |");
				gotoxy(40, 23);
				printf("-----------------------");
			if(clic_pressed(1)){
				quit();
			}

		}else{
				set_color(8);
				gotoxy(40, 13);
				printf("-----------------------");
				gotoxy(40, 14);
				printf("|   NOUVELLE PARTIE   |");
				gotoxy(40, 15);
				printf("-----------------------");
				gotoxy(40, 17);
				printf("-----------------------");
				gotoxy(40, 18);
				printf("|       OPTIONS       |");
				gotoxy(40, 19);
				printf("-----------------------");
				gotoxy(40, 21);
				printf("-----------------------");
				gotoxy(40, 22);
				printf("|       QUITTER       |");
				gotoxy(40, 23);
				printf("-----------------------");
		}
	}
	
}

         //////////////option, speed, level, quit

void option(){
	bool dans_option = true;
	CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
	fill_chb(preparation, ' ', 9);
	clear_chb(preparation);
	show_to_console(preparation, 0, 0);

 
	gotoxy(45, 2);
	set_color(148);
	printf("GAME OPTIONS");;
	set_color(15);
	while(dans_option){
			Sleep(10);
  			poll_event();
		 if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 6 && mouse_y() < 10){
			
			set_color(10);
			gotoxy(40, 7);
			printf("-----------------------");
			gotoxy(40, 8);
			printf("|      SPEED : %d      |",speeds);
			gotoxy(40, 9);
			printf("-----------------------");

			if(clic_pressed(1)){
				Sleep(200);
				speed();
			}
			
		}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 10 && mouse_y() < 14){
			    
				set_color(6);
				gotoxy(40, 11);
				printf("-----------------------");
				gotoxy(40, 12);
				printf("|      LEVELS: %d      |", levels);
				gotoxy(40, 13);
				printf("-----------------------");
			if(clic_pressed(1)){
				Sleep(200);
				level();
			}
				
		}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 14 && mouse_y() < 18){
			    
				set_color(4);
				gotoxy(40, 15);
				printf("-----------------------");
				gotoxy(40, 16);
				printf("|       SOND: %s     |", sonds);
				gotoxy(40, 17);
				printf("-----------------------");
			if(clic_pressed(1)){
				Sleep(200);
				sond();
			}
		}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 18 && mouse_y() < 22){
				set_color(15);
				gotoxy(40, 19);
				printf("-----------------------");
				gotoxy(40, 20);
				printf("|         AIDE        |");
				gotoxy(40, 21);
				printf("-----------------------");
			if(clic_pressed(1)){
					CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
					fill_chb(preparation, ' ', 9);
					clear_chb(preparation);
					show_to_console(preparation, 0, 0);
					aide();
				}	

			}else if(mouse_x() > 39 && mouse_x() < 64 && mouse_y() > 22 && mouse_y() < 26){
				set_color(1);
				gotoxy(40, 23);
				printf("-----------------------");
				gotoxy(40, 24);
				printf("|   Revenir au menu   |");
				gotoxy(40, 25);
				printf("-----------------------");
			if(clic_pressed(1)){
					CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
					fill_chb(preparation, ' ', 9);
					clear_chb(preparation);
					show_to_console(preparation, 0, 0);

					menu();
			}

			}else{
				set_color(8);
				gotoxy(40, 7);
				printf("-----------------------");
				gotoxy(40, 8);
			    printf("|      SPEED : %d      |",speeds);				
				gotoxy(40, 9);
				printf("-----------------------");
				gotoxy(40, 11);
				printf("-----------------------");
				gotoxy(40, 12);
				printf("|      LEVELS: %d      |",levels);
				gotoxy(40, 13);
				printf("-----------------------");
				gotoxy(40, 15);
				printf("-----------------------");
				gotoxy(40, 16);
				printf("|       SOND: %s     |",sonds);
				gotoxy(40, 17);
				printf("-----------------------");
				gotoxy(40, 19);
				printf("-----------------------");
				gotoxy(40, 20);
				printf("|         AIDE        |");
				gotoxy(40, 21);
				printf("-----------------------");
				gotoxy(40, 23);
				printf("-----------------------");
				gotoxy(40, 24);
				printf("|   Revenir au menu   |");
				gotoxy(40, 25);
				printf("-----------------------");	
		}
	}
}




int speed(){

	speeds++;
	if(speeds >= SPEED_MAX){
		speeds = 1;
	}
return speeds;
}

int level(){

	levels++;
	if (levels >= LEVELS_MAX){
		levels = 1;
	}
return levels;
}

char *sond(){

	if(sond_valeur == 1){
		sond_valeur = 2;
		strcpy(sonds, ":-)");
		return sonds;
	}else if(sond_valeur == 2){
		sond_valeur = 1;
		strcpy(sonds, ":-(");
		return sonds;
	}
}

int quit(){
	CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
	fill_chb(preparation, ' ', 9);
	clear_chb(preparation);
	show_to_console(preparation, 0, 0);
	show_cursor(true);
	set_color(15);
  exit(EXIT_SUCCESS);
}


//////////////////////////////////////aide

void aide(){
	bool retour = false;

	set_color(15);
		gotoxy(25, 5);
	printf("-----------------------------------------");
		gotoxy(25, 6);
	printf("|            NOURITURE :                |");
		gotoxy(25, 7);
	printf("|                                       |");
		gotoxy(25, 8);
	printf("|              VOUS:                    |");
		gotoxy(25, 9);
	printf("|                                       |");
		gotoxy(25, 10);
    printf("|                          A            |");
    	gotoxy(25, 11);
    printf("|           DIRECTIONS: A     A         |");
    	gotoxy(25, 12);
    printf("|                          A            |");
    	gotoxy(25, 13);
    printf("-----------------------------------------");

    	gotoxy(50, 6);
    	set_color(64);
    	printf(" ");
    	gotoxy(46 ,8);
    	set_color(16);
    	printf("   ");
    	gotoxy(49 ,8);
    	set_color(96);
    	printf(":");

	while(!retour){
			poll_event();
		if(mouse_x() > 34 && mouse_x() < 63 && mouse_y() > 14 && mouse_y() < 18){
			set_color(4);
			gotoxy(35, 15);
			printf("----------------------");
			gotoxy(35, 16);
			printf("|       RETOUR       |");
			gotoxy(35, 17);
			printf("----------------------");
			if(clic_pressed(1)){
				option();
			}
		}else{
			set_color(15);
			gotoxy(35, 15);
			printf("----------------------");
			gotoxy(35, 16);
			printf("|       RETOUR       |");
			gotoxy(35, 17);
			printf("----------------------");
		}
	}
}



/////////////////////////////////////////jeux



void jeux(){
	int i = 0;
	int longuer_snake[snake_max] = {0};
	int longuer_queu = 3;

	int direction = gauche;
	bool dans_le_game = true;
	CHBITMAP *preparation = create_chb(largeur_console, hauteur_console);
	fill_chb(preparation, ' ', 9);
	clear_chb(preparation);
	show_to_console(preparation, 0, 0);

	cadre_jeux();
	nouriture();
	while(dans_le_game){
		while(kbhit()){
			direction = getch();
		
		}//kbhit
			Sleep(50);
			if(position_x_snake == position_nouriture_x && position_y_snake == position_nouriture_y){
				score += 10;
				longuer_queu++;
				cadre_jeux();
				nouriture();
			}
		snake(direction, longuer_snake, longuer_queu);
	}//dans le game
}


void cadre_jeux(){
	CHBITMAP *cadre = create_chb(largeur_console, hauteur_console);
	fill_part_chb(cadre, 0, 3, largeur_console, 1, ' ', 80);
	fill_part_chb(cadre, 0, 3, 2, hauteur_console, ' ', 80);
	fill_part_chb(cadre, 0, hauteur_console-1, largeur_console, 2, ' ', 80);
	fill_part_chb(cadre, largeur_console-2, 3, 2, hauteur_console, ' ', 80);
	show_to_console(cadre, 0, 0);
}

void nouriture(){
	int al;
	bool test = true;
	while(test){
	srand(time(NULL));
	al = rand()%48;
	Sleep(50);
	srand(time(NULL));
	position_nouriture_x = rand()%100;
	position_nouriture_x *= al;
	position_nouriture_x %= 100;
	Sleep(50);
	srand(time(NULL));
	position_nouriture_y = rand()%28;
	test = (position_nouriture_x < 3) || (position_nouriture_x > largeur_console-3) || (position_nouriture_y < 4) || (position_nouriture_y > hauteur_console-3);
	}
		
	gotoxy(position_nouriture_x, position_nouriture_y);
	set_color(64);
	printf(" ");
}





///////////////////////////////////////////////////////77



void snake(int sens,int *longuer, int long_snake){
	int i = 0;
	cadre_jeux();
	set_color(15);	
	gotoxy(0, 1);
	printf("SCORE: %d", score);
	gotoxy(20, 1);
	printf("SPEED: %d", speeds);
	gotoxy(40, 1);
	printf("LEVEL: %d", levels);
	gotoxy(position_nouriture_x, position_nouriture_y);
	set_color(64);
	printf(" ");

		switch(sens){
				case haut:
					position_y_snake--;
					
					break;
				case bas:
					position_y_snake++;
					
					break;	
				case gauche:
					position_x_snake--;
					
					break;
				case droit:
					position_x_snake++;
				
					break;
			}

	for(i = long_snake;i>=0;i--){
		if(i == 0){
			gotoxy(position_x_snake, position_y_snake);
			set_color(60);
			printf(":");
		}else{
			gotoxy(position_x_snake + i, position_y_snake);
			set_color(100);
			printf(" ");
		}
	}
}