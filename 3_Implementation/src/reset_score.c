#include "Quiz_Game.h"

void resetscore()
    {
    system("cls");
    float scr;
	char nm[20];
	FILE *fptr;
	fptr=fopen("score.txt","r+");
	fscanf(fptr,"%s%f",&nm,&scr);
	scr=0;
	fprintf(fptr,"%s,%.2f",nm,scr);
    fclose(fptr);
    }
