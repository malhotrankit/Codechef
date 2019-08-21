#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int main()
{
	long long i,t,n,m,b,max,min,a,c;
	//clrscr();
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		min=1000000000;
		max=0;
		for(i=0;i<m;i++)
		{
			scanf("%lld",&c);
			if(min>c)
				min=c;
			if(max<c)
				max=c;
		}
		for(i=0;i<n;i++)
		{
			a=max-i;
			if(a<0)
				a=-1*a;
			b=min-i;
			if(b<0)
				b=-1*b;
			if(a>b)
				printf("%lld ",a);
			else
				printf("%lld ",b);

		}
		printf("\n");
	}
	//getch();
	return 0;
}

