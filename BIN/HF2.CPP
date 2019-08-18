/* Barcza Bal zs
   DJVMN2

   H zifeladat: Sz mol¢g‚p
   2005.05.25	*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define PROMPT ':'


main()

{
int i,j,szam=1,ch;
int mozogv=0,mozogf=0;
char op;
int matrix[5][5],g=1;
randomize();
window(1,1,80,50);
textbackground(BLACK);
textcolor(1);
clrscr();
	window(1,25,80,50);
	textbackground(RED);
	clrscr();
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(3+(i*4),3+(j*4),5+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("%d",(szam++));
		       }
	  }
	 szam=1;
	 for(j=0;j<5;j++)
	  {
	    for(i=0;i<5;i++)
		       {
			window(55+(i*4),3+(j*4),57+(i*4),5+(j*4));
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("%d",(szam++));
		       }
	  }
			window(71,19,73,21);
			textbackground(RED);
			clrscr();
		  /*	window(3,3,5,5);
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("1");
			window(7,3,9,5);
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("2");
			window(11,3,13,5);
			textbackground(2);
			clrscr();
			gotoxy(2,2);
			cprintf("3");    */

		  /*	window(55,3,55,5);
			textbackground(6);
			clrscr();   */
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
  do
  {
  op=getch();
	window(71-abs((4*mozogv)),19-abs((4*mozogf)),73-abs((4*mozogv)),21-abs((4*mozogf)));
	textbackground(BLACK);
	clrscr();
  switch (op)
  {
	case 'a':
		if (71+(4*mozogv) > 55)
		mozogv--;
		break;
	case 'd':
		if (73+(4*mozogv) < 73)
		mozogv++;
		break;
	case 'w':
		if (19+(4*mozogf) > 3)
		mozogf--;
		break;
	case 's':
		if (21+(4*mozogf) < 21)
		mozogf++;
		break;
	default :
		cprintf("HIBA");
	exit (-1);

  }
	window(71+(4*mozogv),19+(4*mozogf),73+(4*mozogv),21+(4*mozogf));
	textbackground(RED);
	clrscr();
  }
  while (1);
getch();
textattr((BLACK<<4)+LIGHTGRAY);
}
