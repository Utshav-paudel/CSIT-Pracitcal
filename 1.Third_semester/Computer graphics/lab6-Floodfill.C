//flood fill
// Boundary fill algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood_fill(int x, int y, int fill_color, int old_color)
{
	if((getpixel(x,y) == old_color))
	{
		delay(5);
		putpixel(x,y,fill_color);
		flood_fill(x+1,y,fill_color,old_color);
		flood_fill(x-1,y,fill_color,old_color);
		flood_fill(x,y+1,fill_color,old_color);
		flood_fill(x,y-1,fill_color,old_color);

	}
}
void main()
{
	int x,y,fill_color,old_color;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Flood-Fill Algorithm\n\n\n");
	printf("Enter the seed point (x,y) : ");
	scanf("%d%d",&x, &y);
	printf("Enter the old color:");
	scanf("%d", &old_color);
	printf("Enter new color:");
	scanf("%d",&fill_color);
	circle(100,200,45);
	flood_fill(x,y,fill_color,old_color);
	outtextxy(350,350,"PREPARED BY UTSHAV");
	getch();
}
