#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	if(n%6==0||n%6==1||n%6==3)
		printf("yes");
	else
		printf("no");
	return 0;
}
