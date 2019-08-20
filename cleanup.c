#include<stdio.h>
int a[1000],b[1000];
int main()
{
	int i,m,n,t,k,j=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			a[i]=i+1;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&k);
			a[k-1]=0;
		}
		j=0;
		for(i=0;i<n;i++)
			b[i]=0;
		for(i=0;i<n;i++)
			if(a[i]!=0)
				b[j++]=a[i];
		for(i=0;i<n;i+=2)
			if(b[i]!=0)
				printf("%d ",b[i]);
		printf("\n");
		for(i=1;i<n;i+=2)
			if(b[i]!=0)
				printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}



