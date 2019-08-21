#include<stdio.h>
int main()
{
	long long a,b,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(a>=b)
			printf("%lld %lld\n",a,a+b);
		else
			printf("%lld %lld\n",b,a+b);
	}
	return 0;
}
