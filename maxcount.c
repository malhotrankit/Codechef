#include<stdio.h>
int a[15];
int main()
{
	int t=0,n=0,i=0,sum=0,j=0,k=0,m=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(j=0;j<n;j++)
		{       sum=0;
			for(i=0;i<n;i++)
			{
				if(a[j]==a[i])
					sum++;
				if(j==0||k<sum)
				{
					k=sum;
					m=a[j];
				}
				if(k==sum&&m>a[j])
				{
					k=sum;
					m=a[j];
				}
			}
		}
		printf("%d %d\n",m,k);
	}
	return 0;
}




