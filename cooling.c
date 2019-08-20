#include<stdio.h>
int main()
{
	int t=0,i=0,n=0,k=0,sum=0,max=0,j=0;
	int a[101],b[101];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		{
			if(i==0)
				max=b[i];
			if(b[i]>max)
				max=b[i];
		}
		i=0;
		a1:while(i<n)
		{
			for(j=a[i];j<=max;j++)
			{
				for(k=0;k<n;k++)
				{
					if(j==b[k])
					{
					b[k]=0;
					i++;
					goto a1;
					}
				}

			}
			i++;
			goto a1;
		}
		for(i=0;i<n;i++)
			if(b[i]==0)
				sum++;
		printf("%d\n",sum);
	}
	return 0;
}