#include<stdio.h>
int main()
{
    int a=0,n=0,k=0,i=0;
    scanf("%d%d%d",&a,&n,&k);
    n++;
    for(i=0;i<k;i++)
    {
		    printf("%d ",a%n);
		    a=a/n;
    }
    printf("\n");
    return 0;
}