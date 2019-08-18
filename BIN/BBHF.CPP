#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <dos.h>

char * menu[] = { "\n", "\t\t\t         Barcza Bal†zs",
			"\t\t\t            DJVMN2       ",
                        "\n\n\n"
			"\t\t\t       1.   TILI_TOLI",
			"\t\t\t       2.   MEMORIA_JATEK ",
			"                ",
			"\t\t\t       ESC.   KilÇpÇs" , "\n", NULL };
/******************************************************************
*******************************************************************

*******************************************************************
******************************************************************/
void TILI_TOLI()
{
int i,j,ch;
int mozogv=0,mozogf=0;
char op;
int m[25],sor[26],g=1,lepes=0,csere;
int vektor[10],u,x,t,s;
randomize();
window(1,1,80,50);
textbackground(BLACK);
textcolor(1);
clrscr();
cprintf("-------------TILI_TOLI\n\r");
	window(1,1,80,1);
	textbackground(2);
	clrscr();

	window(6,2,26,22);
	textbackground(3);
	clrscr();
/*--------------------------VÇg†llapot-------------------*/
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			if (g==25) {}
			else
			{cprintf("%d",g);
			g++;}

		       }
	  }

	 window(54,2,74,22);
	 textbackground(3);
	 clrscr();
	 for(i=0;i<25;i++)
	       m[i]=i+1;
	 g=0;x=0;
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(55+(i*4),3+(j*4),57+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);

			g++;
			cprintf("%d",m[x]);x++;

		       }
	  }
			window(71,19,73,21);
			textbackground(RED);
			clrscr();


	window(1,24,80,24);
	textbackground(2);
	clrscr();

	for(i=0;i<25;i++)
	       cprintf("%3d",m[i]);
/*---------------Sz†mok keverÇse----------------------------*/
 x=24; s=0; mozogf=mozogv=0;
 do
 {
 op=random(4)+1;
	window(71-abs((4*mozogv)),19-abs((4*mozogf)),73-abs((4*mozogv)),21-abs((4*mozogf)));
	textbackground(2);
	clrscr();
  switch (op)
  {
	case 1:
		if ((71+(4*mozogf) > 55) && (x>4))
		{mozogf--; csere=m[x];m[x]=m[x-5];m[x-5]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x=x-5;}
		break;
	case 2:
		if ((73+(4*mozogv) < 73) && (x<24))
		{mozogv++; csere=m[x];m[x]=m[x+1];m[x+1]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x++;}
		break;
	case 3:
		if ((19+(4*mozogv) > 3) && (x>0))
		{mozogv--; csere=m[x];m[x]=m[x-1];m[x-1]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x--;}
		break;
	case 4:
		if ((21+(4*mozogf) < 21) && (x<20))
		{mozogf++; csere=m[x];m[x]=m[x+5];m[x+5]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		    lepes++;
		x=x+5;}
		break;


  }
	window(71+(4*mozogv),19+(4*mozogf),73+(4*mozogv),21+(4*mozogf));
	textbackground(RED);
	clrscr();
  delay(30); s++;
  }
  while ((s<2)
 /* (getch()!= 13)*/|| (m[24]!=25));
    window(1,25,80,25);
	textbackground(2);
	clrscr();

	for(i=0;i<25;i++)
	       cprintf("%3d",m[i]);
/************************************************************/
  x=24;lepes=0;mozogv=mozogf=0;
  do
  {
  window(30,1,50,15);
	textbackground(3);
	clrscr();
	cprintf("\n\r");
	cprintf("BARCZA BAL†ZS\n\r");
	cprintf("DJVMN2\n\r");
	cprintf("\n\r");
	cprintf("Keveresek szama: %d\n\r",s);
	cprintf("vektor[%d]=%d\n\r",x,m[x]);
	cprintf("LÇpesek sz†ma:%d",lepes);
	cprintf("\n\r");
	cprintf("\n\r");
	cprintf("Fel : \n\r");
	cprintf("LE  : \n\r");
	cprintf("BAL : \n\r");
	cprintf("JOBB: \n\r");
	cprintf("\n\r");
	cprintf("KilÇpes : ESC\n\r");
  op=getch();
	window(71-abs((4*mozogv)),19-abs((4*mozogf)),73-abs((4*mozogv)),21-abs((4*mozogf)));
	textbackground(2);
	clrscr();
  switch (op)
  {
	case 72:
		if ((71+(4*mozogf) > 55) && (x>4))
		{mozogf--; csere=m[x];m[x]=m[x-5];m[x-5]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x=x-5;}
		break;
	case 77:
		if ((73+(4*mozogv) < 73) && (x<24))
		{mozogv++; csere=m[x];m[x]=m[x+1];m[x+1]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x++;}
		break;
	case 75:
		if ((19+(4*mozogv) > 3) && (x>0))
		{mozogv--; csere=m[x];m[x]=m[x-1];m[x-1]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		  lepes++;
		x--;}
		break;
	case 80:
		if ((21+(4*mozogf) < 21) && (x<20))
		{mozogf++; csere=m[x];m[x]=m[x+5];m[x+5]=csere;
		gotoxy(2,2);
	cprintf("%d",m[x]);
		    lepes++;
		x=x+5;}
		break;
	case 27:
		goto kilep;

  }
	window(71+(4*mozogv),19+(4*mozogf),73+(4*mozogv),21+(4*mozogf));
	textbackground(RED);
	clrscr();


/*EllenãrzÇs______________________________________________*/
  // window(1,1,80,25);
  // textbackground(BLUE);
   if (m[0]==1 && m[1]==2 && m[2]==3 && m[3]==4 && m[4]==5 && m[5]==6 && m[6]==7 && m[7]==8 && m[8]==9 && m[9]==10 && m[10]==11 && m[11]==12 && m[12]==13 && m[13]==14 && m[14]==15
   && m[15]==16 && m[16]==17 && m[17]==18 && m[18]==19 && m[19]==20 && m[20]==21 && m[21]==22 && m[22]==23 && m[23]==24 && m[24]==25)
    {
   if (lepes<=105)
   {window(17,16,62,18);
  textbackground(BLUE);
  clrscr();
  textcolor(YELLOW);
  gotoxy(2,2);
  cprintf("GRATULaLOK! LêPêSEKSZAMA: %d FOKOZAT: MESTER",lepes);
   }
   if (lepes<121 && lepes>105)
   {window(17,16,62,18);
  textbackground(BLUE);
  clrscr();
  textcolor(YELLOW);
  gotoxy(2,2);
  cprintf("GRATULaLOK! LêPêSEKSZAMA: %d FOKOZAT: SZAKI",lepes);
   }
   if (lepes<141 && lepes>120)
   {window(17,16,62,18);
  textbackground(BLUE);
  clrscr();
  textcolor(YELLOW);
  gotoxy(2,2);
  cprintf("GRATULaLOK! LêPêSEKSZAMA: %d FOKOZAT: HALADO",lepes);
   }
   if (lepes<161 && lepes>140)
   {window(17,16,62,18);
  textbackground(BLUE);
  clrscr();
  textcolor(YELLOW);
  gotoxy(2,2);
  cprintf("GRATULaLOK! LêPêPSKSZAMA: %d FOKOZAT: AMATäR",lepes);
   }
   if (lepes>160)
   {
  window(17,16,62,18);
  textbackground(BLUE);
  clrscr();
  textcolor(YELLOW);
  gotoxy(2,2);
  cprintf("GRATULaLOK! LêPêSEKSZAMA: %d FOKOZAT: KEZDä",lepes);
   }}
  }
  while (1);
  kilep:
getch();
textattr((BLACK<<4)+LIGHTGRAY);

}
/***********************************************************************
************************************************************************

************************************************************************
***********************************************************************/


void MEMORIA_JATEK()
{
int i,j,ch;
char op;
int vektor[10],u,x,t,g;
int kill,memori,s;
randomize();
window(1,1,80,50);
textbackground(BLACK);
textcolor(1);
clrscr();
	window(1,1,80,1);
	textbackground(2);
	clrscr();

	window(6,2,26,22);
	textbackground(3);
	clrscr();
/*--------------------------VÇg†llapot-------------------*/
g=1;
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("%d",g);
			g++;

		       }
	  }
/*--------------------------------------------------------*/
	   for(i=0;i<25;i++)
		vektor[i]=random(25)+1;
	window(1,24,80,24);
	textbackground(2);
	clrscr();
	   for(i=0;i<25;i++)
	       cprintf("%3d",vektor[i]);
/*-------------------------------------------------------*/
x=0;t=4900;g=0;
    do
    {
    vektor[g]=u;
	do
	{

	 kill=1;
	 switch (u)
	  {
	     case 1:
		      i=0;
		      j=0;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("1");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("1");
		      break;
	     case 2:
		      i=1;
		      j=0;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("2");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("2");
		      break;
	     case 3:
		      i=2;
		      j=0;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("3");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("3");
		      break;
	     case 4:
		      i=3;
		      j=0;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("4");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("4");
		      break;
	     case 5:
		      i=4;
		      j=0;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("5");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("5");
		      break;
	     case 6:
		      i=0;
		      j=1;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("6");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("6");
		      break;
	     case 7:
		      i=1;
		      j=1;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("7");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("7");
		      break;
	     case 8:
		      i=2;
		      j=1;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("8");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("8");
		      break;
	     case 9:
		      i=3;
		      j=1;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("9");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("9");
		      break;
	     case 10:
		      i=4;
		      j=1;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("10");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("10");
		      break;
	     case 11:
		      i=0;
		      j=2;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("11");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("11");
		      break;
	     case 12:
		      i=1;
		      j=2;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("12");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("12");
		      break;
	     case 13:
		      i=2;
		      j=2;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("13");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("13");
		      break;
	     case 14:
		      i=3;
		      j=2;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("14");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("14");
		      break;
	     case 15:
		      i=4;
		      j=2;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("15");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("15");
		      break;
	     case 16:
		      i=0;
		      j=3;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("16");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("16");
		      break;
	     case 17:
		      i=1;
		      j=3;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("17");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("17");
		      break;
	     case 18:
		      i=2;
		      j=3;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("18");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("18");
		      break;
	     case 19:
		      i=3;
		      j=3;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("19");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("19");
		      break;
	     case 20:
		      i=4;
		      j=3;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("20");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("20");
		      break;
	     case 21:
		      i=0;
		      j=4;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("21");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("21");
		      break;
	     case 22:
		      i=1;
		      j=4;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("22");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("22");
		      break;
	     case 23:
		      i=2;
		      j=4;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("23");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("23");
		      break;
	     case 24:
		      i=3;
		      j=4;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("24");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("24");
		      break;
	     case 25:
		      i=4;
		      j=4;
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(4);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("25");
		      delay(5000-t);
		      window(7+(i*4),3+(j*4),9+(i*4),5+(j*4));
		      textbackground(2);
		      clrscr();
		      gotoxy(2,2);
		      cprintf("25");
		      break;
	  }
	  kill--;
	}
	while (kill!=0);
      window(30,15,80,20);
      textcolor(BLUE);
      textbackground(2);
      clrscr();
      scanf("%d",memori);
      if (memori==vektor[g]) g++;
      else s--;
    }
    while(s!=0);
getch();
}
/**********************************************************************
***********************************************************************

***********************************************************************
**********************************************************************/
void main()
{
char op, **p;

do
{
window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
		window(1,1,5,5);
		textbackground(RED);
		clrscr();
		window(7,1,12,5);
		textbackground(RED);
		clrscr();
		window(1,7,5,12);
		textbackground(RED);
		clrscr();
		window(75,20,80,25);
		textbackground(RED);
		clrscr();
		window(75,13,80,18);
		textbackground(RED);
		clrscr();
		window(68,20,73,25);
		textbackground(RED);
		clrscr();

window(30,1,50,20);
	textcolor(WHITE);
	textbackground(BLUE);
	clrscr();
p = menu;
while (*p)
	printf("%s\n",*p++);
	op=getch();
     switch (op)
	{
	case '1':
		{TILI_TOLI();
		break;}
	case '2':
		{MEMORIA_JATEK();
		break;}
	case 27:
		exit(-1);
	default:
		putchar('\a');
	}

}
while ((op != 0));
}