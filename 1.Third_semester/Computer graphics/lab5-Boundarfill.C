// Boundary fill algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundary_fill(int x, int y, int fcolor, int bcolor)
{
	if((getpixel(x,y) != bcolor) && (getpixel(x,y) != fcolor))
	{
		delay(2);
		putpixel(x,y,fcolor);
		boundary_fill(x+1,y,fcolor,bcolor);
		boundary_fill(x-1,y,fcolor,bcolor);
		boundary_fill(x,y+1,fcolor,bcolor);
		boundary_fill(x,y-1,fcolor,bcolor);
	}
}
void main()
{
	int x,y,fcolor,bcolor;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Boundary-Fill Algorithm\n\n\n");
	printf("Enter the seed point (x,y) : ");
	scanf("%d%d",&x, &y);
	printf("Enter boundary color:");
	scanf("%d", &bcolor);
	printf("Enter new color:");
	scanf("%d",&fcolor);
	circle(100,200,45);
	boundary_fill(x,y,fcolor,bcolor);
	outtextxy(350,350,"PREPARED BY UTSHAV");
	getch();
}
