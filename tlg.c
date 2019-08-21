#include<stdio.h>
int main()
{
	int n,winp,win,a,b,lead,max=0,p1=0,p2=0;
	scanf("%d",&n);
	while(n-->0)
	{
		scanf("%d%d",&a,&b);
		p1=p1+a;
		p2=p2+b;
		if(p1>p2)
		{
			lead=p1-p2;
			winp=1;
		}
		else
		{
			lead=p2-p1;
			winp=2;
		}
		if(max<lead)
		{
			max=lead;
			win=winp;
		}
	}
	printf("%d %d\n",win,max);
	return 0;
}