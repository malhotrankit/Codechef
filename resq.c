#include<stdio.h>
#include<math.h>
long n=0,t=0,i=0,j=0,min=2147483647,k=0;
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		min=2147483647;
		for(i=(sqrt(n))+1;i>=1;i--)
		{
			if(n%i==0)
			{
				j=n/i;
				k=j-i;
				if(k<0)
					k=(-1)*k;
				if(min>k)
					min=k;
			}
		}
		printf("%ld\n",min);
	}
	return 0;
}



