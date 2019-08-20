#include<stdio.h>
char bomb[1005];
int main()
{
	int t,count,n,i;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		scanf("%s",&bomb);
		if(n>1)
		{
			if(bomb[0]=='0'&&bomb[1]!='1')
				count++;
			if(bomb[n-1]=='0'&&bomb[n-2]!='1')
				count++;
			for(i=1;i<n-1;i++)
				if(bomb[i]=='0'&&bomb[i-1]!='1'&&bomb[i+1]!='1')
					count++;
		}
		if(n==1&&bomb[0]=='0')
			count++;
		printf("%d\n",count);
	}
	return 0;
}


