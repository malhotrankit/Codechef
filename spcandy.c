#include<stdio.h>
int main()
{
	unsigned long long n=0,k=0;
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu%llu",&n,&k);
		if(k==0)
			printf("%llu %llu\n",k,n);
		else
			printf("%llu %llu\n",n/k,n%k);
	}
	return 0;
}