#include<stdio.h>
int main()
{
	int a[101],x,n,t,i,k,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&x);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		if(sum%x==0)
			printf("%d\n",sum/x);
		else
		{
			k=sum%x;
			for(i=0;i<n;i++)
				if(k>=a[i])
				{
					printf("-1\n");
					goto a1;
				}
			printf("%d\n",sum/x);
			a1:;
		}
	}
	return 0;
}