#include <stdio.h>
#include <stdlib.h>
#include <sdl.h>
#include <sdl_image.h>
 
#define longuer 600
#define largeur 1000
#define fps 60

typedef enum boollean{
	false,
	true
}bool;

SDL_Window *window;
SDL_Surface *ecran;

SDL_Surface *fond = NULL;

SDL_Surface *veseau = NULL;
SDL_Rect veseau_pos;

SDL_Surface *dep1 = NULL;
SDL_Surface *dep2 = NULL;
SDL_Surface *dep3 = NULL;
SDL_Surface *dep4 = NULL;
SDL_Surface *dep5 = NULL;
SDL_Surface *dep6 = NULL;
SDL_Surface *dep7 = NULL;
SDL_Surface *dep8 = NULL;
SDL_Rect dep_posG;
SDL_Rect dep_posD;


void actualisation();
void boucle_game();
void quit();

int animation = 1;

int main(int argc, char **argv){

	IMG_InitFlags png_image = IMG_INIT_PNG;

	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(png_image);

		window = SDL_CreateWindow("SPACE LAND", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, largeur, longuer, SDL_WINDOW_SHOWN);
		ecran = SDL_GetWindowSurface(window);

		if((fond = SDL_LoadBMP("image/back.bmp")) == NULL){
			quit();
		}

		if((veseau = IMG_Load("image/veseau.png")) == NULL){
			quit();
		}

		if((dep1 = IMG_Load("image/dep/dep1.png")) == NULL){
			quit();
		}

		if((dep2 = IMG_Load("image/dep/dep2.png")) == NULL){
			quit();
		}

		if((dep3 = IMG_Load("image/dep/dep3.png")) == NULL){
			quit();
		}

		if((dep4 = IMG_Load("image/dep/dep4.png")) == NULL){
			quit();
		}

		if((dep5 = IMG_Load("image/dep/dep5.png")) == NULL){
			quit();
		}

		if((dep6 = IMG_Load("image/dep/dep6.png")) == NULL){
			quit();
		}

		if((dep7 = IMG_Load("image/dep/dep7.png")) == NULL){
			quit();
		}

		if((dep8 = IMG_Load("image/dep/dep8.png")) == NULL){
			quit();
		}

		veseau_pos.x = 458;
		veseau_pos.y = 490;

		dep_posG.x = 0;
		dep_posG.y = 0;
		dep_posD.x = 983;
		dep_posD.y = 0;

		actualisation();
		boucle_game();

	
	quit();
 return 0;
}

int temps_debut;

SDL_EnableKeyRepeat(50, 50);

void boucle_game(){
	temps_debut = SDL_GetTicks();

	SDL_bool boucle_programme = SDL_TRUE;

    while(boucle_programme){

			SDL_Event event;

    	while(SDL_PollEvent(&event)){
    		switch(event.type){
    			case SDL_QUIT:
    			  boucle_programme = SDL_FALSE;
    			  quit();
    				break;

    			case SDL_KEYDOWN:
							switch(event.key.keysym.sym){
			    			   		case SDLK_UP:
										veseau_pos.y -= 10;
										actualisation();
			    			   			break;
			    			   		case SDLK_RIGHT:
			    			   			veseau_pos.x += 10;
										break;
									case SDLK_DOWN:
										veseau_pos.y += 10;
										break;
									case SDLK_LEFT:
										veseau_pos.x -= 10;
			    			   			break;
							}//fin switch keyevent			
    		}//fin switch event

    }//fin while event

    if((1000/fps) > SDL_GetTicks() - temps_debut){
    	SDL_Delay((1000/fps) - (SDL_GetTicks() - temps_debut));
    }
   
   actualisation();

    }//fin while boucle_programme

}

void actualisation(){


SDL_BlitSurface(fond, NULL, ecran, NULL);
SDL_BlitSurface(veseau, NULL, ecran, &veseau_pos);
switch(animation){
	case 1:
		SDL_BlitSurface(dep1, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep1, NULL, ecran, &dep_posD);
		break;
	case 2:
		SDL_BlitSurface(dep2, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep2, NULL, ecran, &dep_posD);
		break;
	case 3:
		SDL_BlitSurface(dep3, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep3, NULL, ecran, &dep_posD);
		break;
	case 4:
		SDL_BlitSurface(dep4, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep4, NULL, ecran, &dep_posD);
		break;
	case 5:
		SDL_BlitSurface(dep5, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep5, NULL, ecran, &dep_posD);
		break;
	case 6:
		SDL_BlitSurface(dep6, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep6, NULL, ecran, &dep_posD);
		break;
	case 7:
		SDL_BlitSurface(dep7, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep7, NULL, ecran, &dep_posD);
		break;
	case 8:
		SDL_BlitSurface(dep8, NULL, ecran, &dep_posG);
		SDL_BlitSurface(dep8, NULL, ecran, &dep_posD);
		break;
}

SDL_UpdateWindowSurface(window);
	if(animation >= 8){
		animation = 1;
		boucle_game();
	}
animation++;
boucle_game();
}

void quit(){
	SDL_FreeSurface(fond);
	SDL_FreeSurface(dep1);
	SDL_FreeSurface(dep2);
	SDL_FreeSurface(dep3);
	SDL_FreeSurface(dep4);
	SDL_FreeSurface(dep5);
	SDL_FreeSurface(dep6);
	SDL_FreeSurface(dep7);
	SDL_FreeSurface(dep8);
	SDL_FreeSurface(veseau);

	SDL_FreeSurface(ecran);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();	
}