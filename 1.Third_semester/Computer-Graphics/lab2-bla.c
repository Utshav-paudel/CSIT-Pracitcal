#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void main()
{
int x,y,x1,y1,x2,y2,p,dx,dy;
int gd = DETECT, gm;
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
printf("Enter the x-coordinate of the first point: ");
scanf("%d",&x1);
printf("Enter the y-coordinate of the first point:");
scanf("%d",&y1);
printf("Enter the x-coordinate of the first point: ");
scanf("%d",&x2);
printf("Enter the y-coordinate of the first point:");
scanf("%d",&y2);
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
putpixel(x,y,2);
p=(2*dy-dx);
while(x<=x2)
{
if (p<0)
{
x=x+1;
p=p+2*dy;
}
else
{
x=x+1;
y=y+1;
p=p+(2*dy)-2*dx;
}
putpixel(x,y,WHITE);
delay(20);
}
//outtextxy(x1+5,y1-5,"(x1,y1)");
//outtextxy(x2,y2-30,"(x2,y2)");
outtextxy(x2+20,y2+20,"PREPARED BY UTSHAV");
getch();
closegraph();
}
