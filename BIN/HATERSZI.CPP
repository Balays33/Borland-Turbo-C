#include <stdio.h>
#include <conio.h>


int main(void)
{
textbackground(BLACK);
clrscr();
  window(1,1,40,25);
  textbackground(RED);
  clrscr();

  window(41,1,80,25);
  textbackground(BLUE);
  clrscr();

  window(1,26,40,50);
  textbackground(3);
  clrscr();

  window(41,26,80,50);
  textbackground(2);
  clrscr();

getch();
return 0;
}
