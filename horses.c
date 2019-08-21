#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int a[5001],i,n,min,t;
	scanf("%d",&t);
	while(t--)
	{
	min=INT_MAX;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmpfunc);
	for(i=0;i<n-1;i++)
		if(a[i+1]-a[i]<min)
			min=a[i+1]-a[i];
	printf("%d\n",min);
	}
	return 0;
} 