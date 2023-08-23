//lab7.2 wap to implement scaling
#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm;
	float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("\t\tScaling\n\n");
	printf("Enter the starting point coordinates: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter the ending point coordinates: ");
	scanf("%f %f",&x2,&y2);
	printf("Enter the scaling factors, sx and sy: ");
	scanf("%f %f",&sx,&sy);
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+2,y2+2,"Original line");
	x3=x1*sx;
	y3=y1*sy;
	x4=x2*sx;
	y4=y2*sy;
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x4+2,y4+2,"Line after scalling");
	outtextxy(200,400,"PREPARED BY UTSHAV PAUDEL");
	getch();
}
