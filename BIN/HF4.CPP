/* Barcza Bal zs
   DJVMN2

   H zifeladat: Sz mol¢g‚p
   2005.05.25	*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <dos.h>

#define PROMPT ':'


main()

{
int i,j,ch;
int mozogv=0,mozogf=0;
char op;
int m[5][5],g=1,lepes=0;
int vektor[10],u,x,t;
randomize();
window(1,1,80,50);
textbackground(BLACK);
textcolor(1);
clrscr();
	window(1,25,80,50);
	textbackground(RED);
	clrscr();

	window(1,1,80,1);
	textbackground(2);
	clrscr();

	window(6,2,26,22);
	textbackground(3);
	clrscr();

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
      /*	 window(54,2,74,22);
	 textbackground(3);
	 clrscr();
	 g=0;
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(55+(i*4),3+(j*4),57+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			if ((i!=4) || (j!=4))
			{g++; m[i][j]=g;}
			else m[i][j]=0;
			cprintf("%d",m[i][j]);
		       }
	  }
			window(71,19,73,21);
			textbackground(RED);
			clrscr();


      */
      x=0;         t=4900;
	do
	{

	 vektor[x]=u=random(25)+1;
	 switch (u)
	  {
	     case '1':
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
	     case '2':
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
	     case '3':
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
	     case '4':
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
	     case '5':
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
	     case '6':
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
	     case '7':
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
	     case '8':
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
	     case '9':
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
	     case '10':
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
	     case '11':
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
	     case '12':
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
	     case '13':
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
	     case '14':
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
	     case '15':
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
	     case '16':
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
	     case '17':
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
	     case '18':
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
	     case '19':
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
	     case '20':
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
	     case '21':
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
	     case '22':
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
	     case '23':
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
	     case '24':
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
	     case '25':
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
	  g++;
	}
	while (g>10);

/*  for(i=0;i<5;i++)
      {	for(j=0;j<5;j++)
	   {	g++;
		matrix[i][j]=g;
	   }
      }
  for(i=0;i<5;i++)
      {	for(j=0;j<5;j++)
	   {	cprintf("%4d",matrix[i][j]);
		cprintf("\n\r");
	   }
      }    */



/*  i=4;j=4;
  do
  {
  window(30,1,50,20);
	textbackground(3);
	clrscr();
	cprintf("\n\r");
	cprintf("BARCZA BAL ZS\n\r");
	cprintf("DJVMN2\n\r");
	cprintf("\n\r");
	cprintf("M[%d][%d]:=%d\n\r",i,j,m[i][j]);
	cprintf("\n\r");
	cprintf("L‚pesek sz ma:%d",lepes);
	cprintf("\n\r");
	cprintf("\n\r");
	cprintf("Fel : W\n\r");
	cprintf("LE  : S\n\r");
	cprintf("BAL : A\n\r");
	cprintf("JOBB: D\n\r");
	cprintf("\n\r");
	cprintf("Kil‚pes : V\n\r");
  op=getch();
	window(71-abs((4*mozogv)),19-abs((4*mozogf)),73-abs((4*mozogv)),21-abs((4*mozogf)));
	textbackground(2);
	clrscr();
	gotoxy(2,2);
	cprintf("%d",m[i][j]);
  switch (op)
  {
	case 'a':
		if (71+(4*mozogv) > 55)
		{mozogv--; m[i][j]=m[i][j-1]; m[i][j-1]=0;j--;};
		break;
	case 'd':
		if (73+(4*mozogv) < 73)
		{mozogv++; m[i][j]=m[i][j+1]; m[i][j+1]=0;j++;};
		break;
	case 'w':
		if (19+(4*mozogf) > 3)
		{mozogf--; m[i][j]=m[i-1][j]; m[i-1][j]=0;i--;}
		break;
	case 's':
		if (21+(4*mozogf) < 21)
		{mozogf++; m[i][j]=m[i+1][j]; m[i+1][j]=0;i++;}
		break;
	default :
		goto kilep;

  }
	window(71+(4*mozogv),19+(4*mozogf),73+(4*mozogv),21+(4*mozogf));
	textbackground(RED);
	clrscr();
	gotoxy(2,2);
	cprintf("%d",m[i][j]);
  lepes++;
  }
  while (1);
  kilep:    */
getch();
textattr((BLACK<<4)+LIGHTGRAY);
}
