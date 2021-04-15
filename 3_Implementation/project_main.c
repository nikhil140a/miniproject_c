#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC Welcome to QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   LET's ");
     printf("\n\t\t\t      BEGIN ");
     printf("\n\t\t\t   THE GAME!!!! ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   KAUN BANGEA CROREPATI!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to begin the quiz");
     printf("\n\t\t > Press V to obtain the highest score  ");
     printf("\n\t\t > Press R to reset the score");
     printf("\n\t\t > press H for Help            ");
     printf("\n\t\t > press Q to Quit            ");
     printf("\n\t\t________________________________________\n\n");
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

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tENTER YOUR NAME:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to Kaun Banega Crorepati --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,BEGINNER ROUND & KHATARNAK ROUND");
    printf("\n >> In beginner round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded RS100000000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
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
			    printf("\n\nCorrect!!!");
                             count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.largest railway station");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nEntomology is the science that studies");
		printf("\n\nA.Behavior of human beings\t\tB.Insects\n\nC.The origin and history of technical and scientific terms\t\tD.The formation of rocks");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Insects");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nEritrea, which became the 182nd member of the UN in 1993, is in the continent of?");
		printf("\n\nA.Asia\t\tB.Africa\n\nC.Europe\t\tD.Australia");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Africa");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nGarampani sanctuary is located at?");
		printf("\n\nA.Junagarh, Gujarat\t\tB.Diphu, Assam\n\nC.Kohima, Nagaland\t\tD.Gangtok, Sikkim");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Diphu, Assam");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nFor which of the following disciplines is Nobel Prize awarded?");
        printf("\n\nA.Physics and Chemistry\t\tB.Physiology or Medicine\n\nC.Literature, Peace and Economics\t\tD.All of the above");
        if (toupper(getch())=='D')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is D.All of the above");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU GAVE THE WRONG ANSWER!!!!, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATIONS %s you are qualified for Khatarnak Round to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}
