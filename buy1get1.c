#include<stdio.h>
#include<string.h>
int main()
{
	int count,t,i,n,j;
	char a[201];
	scanf("%d",&t);
	while(t--)
	{
	    int b[201]={0};
	    count=0;
	    scanf("%s",&a);
	    n=strlen(a);
	    for(i=0;i<n;i++)
	    {
		if(b[i]==-1)
			continue;
		count++;
		b[i]=-1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&b[j]!=-1)
			{
				b[j]=-1;
				break;
			}
		}
	    }
	    printf("%d\n",count);
	}
	return 0;
}