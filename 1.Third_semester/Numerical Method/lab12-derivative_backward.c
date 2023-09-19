//12-04/22
#include<stdio.h>
#include<math.h>
#define f(x)(a*x*x + b*x + c)
#define PI 3.14
int main(){
	float fx,fxh,fdx;
	float h ;
	float x;
	float a,b,c;
	printf("Find derivative using backward difference\n\n");
	printf("Enter the coefficencts : a b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("Enter the value at which derivative is needed  : ");
	scanf("%f",&x);
	printf("\nEnter the small differnce h : ");
	scanf("%f",&h);
	fx = f(x);
    fxh = f(x-h);
	fdx = (fx-fxh)/h;
	printf("\nResult of derivative is : %f ",fdx);
	return 0;
}
