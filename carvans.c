#include<stdio.h>
int main()
{
	unsigned long a[10000],i,t,count,n;
	scanf("%lu",&t);
	while(t--)
	{
		scanf("%lu",&n);
		for(i=0;i<n;i++)
			scanf("%lu",&a[i]);
		count=1;
		for(i=1;i<n;i++)
			if(a[i-1]>a[i])
				count++;
			else
				a[i]=a[i-1];
		printf("%lu\n",count);
	}
	return 0;
}

