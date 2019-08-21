#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,i,count1,count2,t,num,n,d;
	scanf("%lld",&t);
	while(t--)
	{
		count1=0;count2=0;num=0;
		scanf("%lld%lld%lld",&n,&a,&b);
		while(a>0)
		{
			count1=count1+(a%2);
			a=a/2;
		}
		while(b>0)
		{
			count2=count2+(b%2);
			b=b/2;
		}
		if(count1+count2<=n)
			d=count1+count2;
		else
		{
			d=count1+count2-n;
			d=n-d;
		}
		for(i=0;i<d;i++)
			num=num+pow(2,n-i-1);
		printf("%lld\n",num);
	}
	return 0;
}


