#include<stdio.h>
unsigned long n=0;
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lu",&n);
		printf("%lu\n",(n/2)+1);
	}
	return 0;
}


