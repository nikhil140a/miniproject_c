#include "Quiz_Game.h"


void editscore(float score, char plnm[20])
	{
        system("cls");
	float scr1;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&scr1);
	if (score>=scr1)
	  { 
            scr1=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,scr1);
	    fclose(f);
           }

          }
