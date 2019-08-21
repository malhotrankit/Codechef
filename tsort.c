#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	long long a[1000000],i,n;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	qsort(a,n,sizeof(long long),cmpfunc);
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	printf("\n");
	return 0;
}