// C program for Secant Method
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
float a0, a1, a2, a3;
int main()
{
	float x0, x1,x2, fx1, fx0, E, Era;
	printf("Secant Method\n\n\n");
	printf("Enter the coordinate a3, a2, a1 and a0: \n");
	scanf("%f%f%f%f", &a3,&a2,&a1,&a0);
	printf("Enter initial guess and E: \n");
	scanf("%f%f%f",&x0,&x1,&E);
	while (1)
	{
		fx0 = F(x0);
		fx1 = F(x1);
		x2 = x1-((fx1*(x1-x0))/(fx1-fx0));
		Era = (x1-x0)/x1;
		if(fabs(Era)<E)
		{
			printf("Root = %f.",x1);
			break;
		}
		x0 =x1;
		x1=x2;
	}
return 0;
}
