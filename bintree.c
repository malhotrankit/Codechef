#include<stdio.h>
int main()
{
	long long t,a,b,count;
	scanf("%lld",&t);
	while(t--)
	{
		count=0;
		scanf("%lld%lld",&a,&b);
		while(a!=b)
		{
			if(a>b)
			{
				if(a%2==0)
				{
					a=a/2;
					count++;
				}
				else
				{
					a=(a-1)/2;
					count++;
				}
			}
			if(b>a)
			{
				if(b%2==0)
				{
					b=b/2;
					count++;
				}
				else
				{
					b=(b-1)/2;
					count++;
				}
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}




