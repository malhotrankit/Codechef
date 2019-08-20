#include<stdio.h>
int main()
{
	int n=0;
	a1:scanf("%d",&n);
	while(n!=42)
	{
		printf("%d\n",n);
		goto a1;
	}
	return 0;
}


