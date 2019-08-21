#include<stdio.h>
int a[100][100];
int main()
{
	int t,i,j,n,max;
	scanf("%d",&t);
	while(t--)
	{
		int b[100][100]={{0}};
		max=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				scanf("%d",&a[i][j]);
		b[0][0]=a[0][0];
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(a[i+1][j]+b[i][j]>b[i+1][j])
					b[i+1][j]=a[i+1][j]+b[i][j];
				if(a[i+1][j+1]+b[i][j]>b[i+1][j+1])
					b[i+1][j+1]=a[i+1][j+1]+b[i][j];
			}
		}
		for(j=0;j<n;j++)
			if(b[n-1][j]>max)
				max=b[n-1][j];
		printf("%d\n",max);
		//for(i=0;i<n;i++)
			//for(j=0;j<=i;j++)
				//b[i][j]=0;

	}
	return 0;
}













