#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp,n;
    int *p;
    printf("Enter value of n: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter values\n");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("Ascending order = ");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);
    free(p);
    return 0;
}
