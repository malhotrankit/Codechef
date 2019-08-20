#include<stdio.h>
int main()
{
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	if(((a-b)%10)==9)
		printf("%d\n",(a-b-1));
	else
		printf("%d\n",(a-b+1));
	return 0;
}
