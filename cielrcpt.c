#include<stdio.h>
int main()
{
	int t=0,i=2048,sum=0,p=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		sum=0;
		i=2048;
		while(p>0)
		{
			if((p/i)>0)
			{
				sum++;
				p=p-i;
			}
			else
				i=i/2;
		}
	printf("%d\n",sum);
	}
	return 0;
}




