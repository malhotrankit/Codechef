#include<stdio.h>
int main()
{
	long long n,k,a[100000],i,max=-999999999;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	if(k==0)
		goto a1;
	k=k%2;
	a2:;
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	for(i=0;i<n;i++)
		a[i]=max-a[i];
	if(k==0)
	{
		k=-1;
		goto a2;
	}
	a1:;
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	printf("\n");
	return 0;
}



