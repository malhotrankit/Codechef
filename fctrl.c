	#include<stdio.h>
	int main()
	{
		unsigned long n=0,sum=0,i=0;
		unsigned int t=0,m=0;
		scanf("%u",&t);
		m=t;
		while(t>0)
		{       --t;
			scanf("%lu",&n);
			while(n>=5)
			{
				n=n/5;
				sum=sum+n;
			}
			printf("%lu",sum);
			printf("\n\n");
			sum=0;
		}
		return 0;
	}