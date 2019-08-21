#include<stdio.h>
#include<string.h>
char str[100001];
int main()
{
	long long t,n,k,p,i,a;
	a=1000000007;
	scanf("%lld",&t);
	while(t--)
	{
		k=2;
		p=1;
		scanf("%s",&str);
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			if(str[i]=='l'&&k%2==0)
			{
				p=p*2;
				k=k+1;
			}
			else if(str[i]=='r'&&k%2==0)
			{
				p=p*2+2;
				k=k+1;
			}
			else if(str[i]=='l'&&k%2==1)
			{
				p=p*2-1;
				k=k+1;
			}
			else
			{
				p=p*2+1;
				k=k+1;
			}
			p=p%a;
		}
		printf("%lld\n",(p%a));
	}
	return 0;
}

