#include "Quiz_Game.h"

void showrecord()
    {
        system("cls");
        char name[20];
        float scr;
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s%f",&name,&scr);
        printf("\n\n\t\t*************************************************************");
        printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
        printf("\n\n\t\t*************************************************************");
        fclose(f);
        getch();
    }