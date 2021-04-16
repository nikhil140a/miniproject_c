#include "Quiz_Game.h"

void showrecord()
    {
        system("cls");
	char name[20];
	float sc;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&sc);
	printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\t %s  Highest Scorer %0.2f",name,sc);
	printf("\n\n\t\t*********************");
	fclose(f);
	getch();
     }
