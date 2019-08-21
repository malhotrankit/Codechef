#include<stdio.h>
int main()
{
	int i,n,j,k,t,swap,c[160]={0},carry=0,sum,m,p;
	scanf("%d",&t);
	while(t-->0)
	{
		k=0;
		scanf("%d",&n);
		for(i=n;i>0;i=i/10)
			c[k++]=i%10;
		p=k-1;k=0;carry=0;
		for(i=n-1;i>1;i--)
		{
			carry=0;
			for(j=0;j<=p;j++)
			{
				sum=c[j]*i+carry;
				carry=sum/10;
				c[j]=sum%10;
			}
			while(carry!=0)
			{
				c[j++]=carry%10;
				carry=carry/10;
				p++;
			}

		}
		for(i=p;i>=0;i--)
		{
			printf("%d",c[i]);
			c[i]=0;
		}
		printf("\n");
	}
	return 0;
}

