#include<stdio.h>
int main()
{
	unsigned long a[101],k=0,i=0,t=0,n=0,count=0;
	scanf("%lu",&t);
	while(t--)
	{
		scanf("%lu",&n);
		for(i=0;i<n;i++)
			scanf("%lu",&a[i]);
		scanf("%lu",&k);
		for(i=0;i<n;i++)
			if(a[k-1]>a[i])
				count++;
		printf("%lu\n",count+1);
		count=0;
	}
	return 0;
}



