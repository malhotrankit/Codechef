#include<stdio.h>
#include<string.h>
int main()
{
	long a,rem,c;
	int t,n,i;
	char b[251];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld%s",&a,&b);
		n=strlen(b);
		rem=0;
		if(a==0)
			printf("%s\n",b);
		else
		{

			for(i=0;i<n;i++)
				rem=((b[i]-'0')+rem*10)%a;
			while(rem!=0)
			{
				c=a;
				a=rem;
				rem=c%a;
			}
			printf("%ld\n",a);
		}

	}
	return 0;
}