#include<stdio.h>
#include<math.h>
int main()
{
	long long i,j=1,t,a[10],n,k,m=0;
	scanf("%lld",&t);
	while(t--)
	{
		m=0,j=1;
		for(i=0;i<10;i++)
			scanf("%lld",&a[i]);
		while(1)
		{
			for(i=1;i<10;i++)
				if(a[i]<j)
					goto a1;
			if(a[0]<j)
			{
				i=0;
				goto a1;
			}
			j++;
		}
		a1:;
		n=pow(10,j-1);
		if(n==1&&i!=0)
			printf("%lld\n",i);
		else if(n>1&&i!=0)
		{
			for(k=j-1;k>=0;k--)
				m=m+i*pow(10,k);
			printf("%lld\n",m);
		}
		else
		{
			m=pow(10,j);
			printf("%lld\n",m);
		}
	}
	return 0;
}
