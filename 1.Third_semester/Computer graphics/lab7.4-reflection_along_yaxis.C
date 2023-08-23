//lab7.4 wap to implement reflection along y axis
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
char incFlag;
int PolygonPoints[3][2]={{10,100},{110,100},{110,200}};
void PolyLine(){
	int iCnt;
	line(0,240,640,240);
	line(320,0,320,480);
	for(iCnt=0;iCnt<3;iCnt++){
		line(PolygonPoints[iCnt][0],PolygonPoints[iCnt][1],PolygonPoints[(iCnt+1)%3][0],PolygonPoints[(iCnt+1)%3][1]);
	}


}
void Reflect(){
	float angle;
	int iCnt;
	int tx,ty;

	for(iCnt=0;iCnt<3;iCnt++){
	PolygonPoints[iCnt][0]=(640-PolygonPoints[iCnt][0]);
	}

}
void main(){
	int gd=DETECT,gm;
	int iCnt;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("\tReflection along y axis\n\n");

	for(iCnt=0;iCnt<3;iCnt++){
		PolygonPoints[iCnt][0]+=320;
		PolygonPoints[iCnt][1]=240-PolygonPoints[iCnt][1];

	}
	PolyLine();
	getch();
	Reflect();
	PolyLine();
	outtextxy(20,250,"PREPARED BY UTSHAV PAUDEL");
	getch();

}
