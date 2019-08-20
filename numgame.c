#include<stdio.h>
#include<string.h>
int main()
{
	char num[200];
	int k=0,t=0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s",&num);
	k=strlen(num);
	if(num[k-1]%2==0)
		printf("ALICE\n");
	else
		printf("BOB\n");
	}
	return 0;
}
