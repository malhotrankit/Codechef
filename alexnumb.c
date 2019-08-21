#include<stdio.h>
long long n,t,q,i;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&q);
		printf("%lld\n",((n*(n-1))/2));
	}
	return 0;
}
