#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void showrecord();
void resetscore();
void help();
void editscore(float , char []);
int main()
     {
     int counter,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC Welcome to QUIZZZZ MANIA\n");
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");

     printf("\n\t\t\t   LET's ");
     printf("\n\t\t\t      BEGIN ");
     printf("\n\t\t\t   THE GAME!!!! ");
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
     printf("\n\t\t   KAUN BANEGA CROREPATI!!!!!!!!!!!    ") ;
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
     printf("\n\t\t > ENTER S to start QUIZZZ MANIA");
     printf("\n\t\t > ENTER V to obtain the max scorecard  ");
     printf("\n\t\t > ENTER R to re-initialize the scorecard");
     printf("\n\t\t > ENTER H(HELP!!!!)           ");
     printf("\n\t\t > ENTER  Q to (Quit)            ");
     printf("\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	showrecord();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();
         getch();
	goto mainhome;
	}
	else if (choice=='R')
	{
        resetscore();
	getch();
	goto mainhome;
        }

	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\t\t\tENTER PLAYER's NAME:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to Kaun Banega Crorepati --------------------------",playername);
    printf("\n\n Let's discuss the pattern of QUIZZZZ MANIA");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are two rounds in this Quiz Game,BEGINNER ROUND & KHATARNAK ROUND");
    printf("\n >> In beginner round player be asked a total of 3 questions to test your");
    printf("\n    general knowledge. Player is eligible to play the game if he give's atleast 2");
    printf("\n    correct answers, otherwise you can't proceed further to the KHATARNAK ROUND.");
    printf("\n >> The game starts with KHATARNAK ROUND. In this round player will be asked a");
    printf("\n    total of 10 questions.For every correct answer player will get Rs 1000000");
    printf("\n    Total cash prize amounts to ONE CRORE!!!!!..........");
    printf("\n >> Each question will have 4 options and player can choose A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> Player will be asked questions continuously, till right answers are given");
    printf("\n >> No penalty for incorrect answers");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Enter Y  to start the QUIZZZ MANIA!\n");
    printf("\n Enter any key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        	}
    else
	{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nGrand Central Terminal, Park Avenue, New York is the world's?");
		printf("\n\nA.largest railway station\t\tB.highest railway station\n\nC.longest railway station\t\tD.None of the above");
		if (toupper(getch())=='A')
			{
			    printf("\n\nRight Answer!!!");
                            count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nIncorrect!!! The correct answer is A.largest railway station");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nEntomology is the science that studies");
		printf("\n\nA.Behavior of human beings\t\tB.Insects\n\nC.The origin and history of technical and scientific terms\t\tD.The formation of rocks");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.Insects");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nEritrea, which became the 182nd member of the UN in 1993, is in the continent of?");
		printf("\n\nA.Asia\t\tB.Africa\n\nC.Europe\t\tD.Australia");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.Africa");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nGarampani sanctuary is located at?");
		printf("\n\nA.Junagarh, Gujarat\t\tB.Diphu, Assam\n\nC.Kohima, Nagaland\t\tD.Gangtok, Sikkim");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			count++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.Diphu, Assam");
		       getch();
		       break;}

        case 5:
        	printf("\n\n\nFor which of the following disciplines is Nobel Prize awarded?");
        	printf("\n\nA.Physics and Chemistry\t\tB.Physiology or Medicine\n\nC.Literature, Peace and Economics\t\tD.All of the above");
        	if (toupper(getch())=='D')	
			{printf("\n\nRight Answer!!!");
			count++;
               		getch();
                	break;}
        	else
		       {printf("\n\nIncorrect!!! The correct answer is D.All of the above");
		       getch();
		       break;}

        case 6:
		printf("\n\n\n	In which decade was the American Institute of Electrical Engineers (AIEE) founded?");
		printf("\n\nA.A 1850s\t\tB.1880s\n\nC1930s\t\tD.1950s");
		if (toupper(getch())=='B' )
			{printf("\n\nRight Answer!!!");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.1880s ");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nOOPS YOU GAVE THE INCORRECT ANSWER!!!!, TRY AGAIN LATER");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t** CONGRATULATIONS %s you are qualified for Khatarnak Round of  the QUIZZ MANIA **",playername);
     printf("\n\n\n\n\t!Enter any key to Start the QUIZZ MANIA!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     counter=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is part of a database that holds only one type of information?");
		printf("\n\nA.Report\t\tB.Field\n\nC.Record\t\tD.File");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.Field");
			getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nWho invented the BALLPOINT PEN?,");
		printf("\n\nA.	Biro Brothers\t\tB.Waterman Brothers\n\nC.Bicc Brothers\t\tD.Write Brothers");
		if (toupper(getch())=='A')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Biro Brothers");
			getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n	What J. B. Dunlop invented? ");
		printf("\n\nA.Pneumatic rubber tire\t\tB.Automobile wheel rim\n\nC.Rubber boot\t\tD.Model airplanes");
		if (toupper(getch())=='A')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Pneumatic rubber tire");
			getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWhat is the name of the CalTech seismologist who invented the scale used to measure the magnitude of earthquakes? ");
		printf("\n\nA.Charles Richter\t\tBHiram Walkern\nC.Giuseppe Mercalli\t\tD.Joshua Rumble");
		if (toupper(getch())=='A')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {
                printf("\n\nIncorrect!!! The correct answer is A.Charles Richter");
			getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhat Galileo invented?");
		printf("\n\nA.Barometer\t\tB.Pendulum clock\n\nC.Microscope\t\tD.Thermometer");
		if (toupper(getch())=='D')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch(); 
			break;}
		else
		       {
		           printf("\n\nIncorrect!!! The correct answer is D.Thermometer");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n	The prestigious Ramon Magsaysay Award was conferred was conferred upon Ms. Kiran Bedi for her excellent contribution to which of the following fields?");
		printf("\n\nA.Literature\t\tB.Community Welfare\n\nC.Government Service\t\tD.Journalism");
		if (toupper(getch())=='C' )
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is C.Government Service ");
			goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhich of the following societies has instituted an award for an outstanding parliamentarian?");
		printf("\n\nA.Jamanlal Bajaj Foundation\t\tB.Institute of Constitutional and Parliamentary Studies\n\nC.G. B. Pant Memorial Society\t\tD.R. D. Birla samara Kosh");
		if (toupper(getch())=='C')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is D.Nippon");
			getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nThe Homolographic projection has the correct representation of");
		printf("\n\nA.shape\t\tB.area\n\nC.baring\t\tD.distance");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.area");
			getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n	The hazards of radiation belts include");
		printf("\n\nA.deterioration of electronic circuits\t\tB.damage of solar cells of spacecraft\n\nC.adverse effect on living organisms\t\tD.All of the above");
		if (toupper(getch())=='D')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is D.All of the above");
			getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nThe great Victoria Desert is located in");
		printf("\n\nA.Canada\t\tB.West Africa\n\nC.Australia\t\tD.North America");
		if (toupper(getch())=='C')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is C.Australia");
			getch();
			break;
			goto score;}

        case 11:
		printf("\n\n\n	The ratio of width of our National flag to its length is");
		printf("\n\nA.3:5\t\tB.2:3\n\nC.2:4\t\tD.3:4");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			 break;}
		else
              	{
		printf("\n\nIncorrect!!! The correct answer is B.2:3");
		getch();
              	break;
		goto score;}

        case 12:
		printf("\n\n\n	Rabindranath Tagore's 'Jana Gana Mana' has been adopted as India's National Anthem. How many stanzas of the said song were adopted?");
		printf("\n\nA.Only the first stanza\t\tB.The whole song\n\nC.Third and Fourth stanza\t\tD.	First and Second stanza");
		if (toupper(getch())=='A')
			  {printf("\n\nRight Answer!!!");
			   counter++;
			   getch();
			   break;}
		else
              	{printf("\n\nIncorrect Answer!!! The correct answer is A.Only the first stanza");
                        getch();
              		break;
                        goto score;}

		case 13:
		printf("\n\n\n'Natya - Shastra' the main source of India's classical dances was written by");
		printf("\n\nA.Nara Muni\t\tB.Bharat Muni\n\nC.Abhinav Gupta\t\tD.Tandu Muni");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			counter++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is D.France");
			getch();
		        break;
			goto score;}

        case 14:
		printf("\n\n\n'Dandia' is a popular dance of?");
		printf("\n\nA.Punjab\t\tB.Gujarat\n\nC.Tamil Nadu\t\tD.Maharashtra");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
			 counter++;
			 getch();
			 break;}
		else
		       {printf("\n\nIncorrect Answerr!!! The correct answer is A.Narayan Wagle");
                        getch();
		        break;
                        goto score;}

		case 15:
		printf("\n\n\n	The words 'Satyameva Jayate' inscribed below the base plate of the emblem of India are taken from");
		printf("\n\nA.Rigveda\t\tB.Satpath Brahmana\n\nC.Mundak Upanishad\t\tD.Ramayana");
		if (toupper(getch())=='C')
			{printf("\n\nright Answer!!!");
			 counter++;
                         getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.AB");
                       getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nThe members of the Rajya Sabha are elected by");
		printf("\n\nA.the people\t\tB.Lok Sabha\n\nC.elected members of the legislative assembly\t\tD.elected mebers of the legislative council");
		if (toupper(getch())=='C')
			{printf("\n\nRight Answer!!!");
			 counter++; 
                         getch();
			 break;
			}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Light Year");
                       getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\n	The power to decide an election petition is vested in the");
		printf("\n\nA.Parliament\t\tB.Supreme Court\n\nC.High Courts\t\tD.Election Comission");
		if (toupper(getch())=='C')
			{printf("\n\nRight Answer!!!");
			counter++;
                        getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Brazil");
                        getch();
                        goto score;
		        break;}

		case 18:
		printf("\n\n\nThe present Lok Sabha is the");
		printf("\n\nA.14th Lok Sabha\t\tB.15th Lok Sabha\n\nC.16th Lok Sabha\t\tD.17th Lok Sabhar\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nRight Answer!!!");
                         counter++;
                         getch();
			 break;}
		else
		       {printf("\n\nIncorrect Answer!!! The correct answer is D.17th Lok Sabha");
                        getch();
                        goto score;
		        break;}

                
                case 19:
		printf("\n\n\nGuarantee to an exporter that the importer of his goods will pay immediately for the goods ordered by him, is known as?");
		printf("\n\nA.Letter of Credit (L/C)\tB.laissezfaire\n\nC.Inflation\tD.None of the above\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			counter++;
			getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Letter of Credit");
			getch();
			goto score;
		        break;}

		case 20:
		printf("\n\n\nFederation Cup, World Cup, Allywyn International Trophy and Challenge Cup are awarded to winners of");
		printf("\n\nA.Tennis\t\tB.Volleyball\n\nC.Basketball\t\tD.Cricket");
		if (toupper(getch())=='B')
			{printf("\n\nRight Answer!!!");
                         counter++;
                         getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is B.Volleyball");
			getch();
			goto score;
		        break;}

		case 21:
		printf("\n\n\nFamous sculptures depicting art of love built some time in 950 AD - 1050 AD are ?");
		printf("\n\nA.Khajuraho Temples\t\tB.Jama Masjid\n\nC.Sun Temple\t\tD.Mahabalipuram Temples");
		if (toupper(getch())=='A')
			{printf("\n\nRight Answer!!!");
			counter++;
                        getch();
			break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is A.Khajuraho Temples");
                        getch();
                        goto score;
		        break;}

		case 22:
		printf("\n\n\n 	Fire temple is the place of worship of which of the following religion?");
		printf("\n\nA.Taoism\t\tB.Judaism\n\nC.Zoroastrianism\t\tD.Shintoism");
		if (toupper(getch())=='C')
			{printf("\n\nRight Answer!!!");
                         counter++; getch();
			 break;}
		else
		       {printf("\n\nIncorrect!!! The correct answer is C.Zoroastrianism");
                        getch();
                        goto score;
		        break;}

		}} 

	score:
    system("cls");
	score=(float)counter*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t****** CONGRATULATIONS*******");
	     printf("\n\t YOU ARE A CHAMPION $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t Congratulation!!");
	    printf("\n\t\t\t\tHURRAY!! YOU ARE A CROREPATI!!!!!!!!!");
	    printf("\n\t\t YOU ARE A CHAMPION$%.2f",score);
	    printf("\t\tHURRAY!!");
	}
	 else
        {
	 printf("\n\n\t**** SORRY!! NOT ELIGIBLE FOR ANY PRIZE****");
	    printf("\n\t\t Your hearty participation is appreciated!");
	    printf("\n\t\tDont Give Up!! ");goto go;}

	go:
	puts("\n\n Press Y to continue!!");
	puts(" Enter any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		editscore(score,playername);
		goto mainhome;
                }
         }   
}

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

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n");
    printf("\n ......................... Quiz Mania...........");
    printf("\n >> It's a two level Quiz Game, BEGINNERS ROUND & KHATARNAK ROUND");
    printf("\n >> In BEGINNERS  ROUND there will be total of 3 questions to test your ");
    printf("\n    knowledge. Player will be eligible to play KHATARNAK ROUND  if you can answer atleast 2");
    printf("\n    questions otherwise you can't proceed further...........");
    printf("\n >> Your game starts with the KHATARNAK ROUND. In KHATARNANK ROUND you will be asked");
    printf("\n    total 10 questions each right answer will be awarded RS 10,00,000.");
    printf("\n    Player can earn upto ONE CRORE cash prize in Rupees...............");
    printf("\n >> Player will be given 4 options and he/she will have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions till player keeps giving the right answers.");
    printf("\n >> No penalty for wrong answers");

	printf("\n\n\t********ALL THE BEST************");
	printf("\n\n\t**THIS QUIZ GAME is developed by KODERZZZZZ***");}

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
