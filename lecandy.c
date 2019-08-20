#include<stdio.h>
int main()
{
	int n=0,c=0,k=0,i=0,t=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&c);
		i=0;
		a2:while(i<n)
		{
			scanf("%d",&k);
			goto a1;
		}
		a1:if(i<=n-1)
		   {
			c=c-k;
			i++;
			goto a2;
		   }
		if(i==n&&c>=0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

