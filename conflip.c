#include<stdio.h>
unsigned long n=0;
int main()
{
	int t=0,g=0,i=0,q=0,j=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&g);
		for(j=0;j<g;j++)
		{
			scanf("%d",&i);
			scanf("%lu",&n);
			scanf("%d",&q);
			if(n%2==0)
				printf("%lu\n",n/2);
			else
			{
				if(i==q)
					printf("%lu\n",n/2);
				else
					printf("%lu\n",((n/2)+1));
			}
		}
	}
	return 0;
}




