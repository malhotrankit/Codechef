#include<stdio.h>
int main()
{
	long long i,n,t,a,max;
	scanf("%lld",&t);
	while(t--)
	{
		max=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a+i>max)
				max=a+i;
		}
		printf("%lld\n",max);
	}
	return 0;
}
