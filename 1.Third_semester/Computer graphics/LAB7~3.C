//lab7.6 wap to implement yshearing
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main(){
	
	int gd=DETECT, gm;
	float shx,shy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("\t Y axis shear\n\n");
	printf("Enter shear factor shy along y-axis: ");
	scanf("%f",&shy);
	line(200,110,300,110);
	line(300,110,300,300);
	line(300,300,200,300);
	line(200,300,200,110);
	printf("Y-shear");
	setcolor(12);
	line(200,110+(shy*200),300,110+(shy*300));
	line(300,110+(shy*300),300,300+(shy*300));
	line(300,300+(shy*300),200,300+(shy*200));
	line(200,300+(shy*200),200,110+(shy*200));
       outtextxy(20,400,"PREPARED BY UTSHAV PAUDEL");
	getch();
	closegraph();

}
