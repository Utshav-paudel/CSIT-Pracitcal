// C program for Fixed point
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
#define G(x) (a3*x*x*x+a2*x*x+a0)/(-a1)
float a0, a1, a2, a3;
int main()
{
	float x0, x1, fx,gx,fgx0, E, Era;
	printf("Fixed Point Method\n\n\n");
	printf("Enter the coordinate a3, a2, a1 and a0: \n");
	scanf("%f%f%f%f", &a3,&a2,&a1,&a0);
	printf("Enter initial guess and E: \n");
	scanf("%f%f",&x0, &E);
	while (1)
	{
			
		x1 = G(x0);
		Era = (x1-x0)/x1;
		if(fabs(Era)<E)
		{
			printf("Root = %f.",x1);
			break;
		}
		x0=x1;
	}
	return 0;
}
