#include<stdio.h>
int main()
{
	char string[]="zyxwvutsrqponmlkjihgfedcba";
	char *ptr;
	int  t,k,i,rem;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		if(k==0)
			;
		else
		{
			rem=k%25;
			k=k/25;
			if(rem>0)
			{
				for(ptr=&string[25-rem];*ptr>='a';ptr++)
					printf("%c",*ptr);
				for(i=0;i<k;i++)
					printf("%s",string);
			}
			if(rem==0)
				for(i=0;i<k;i++)
					printf("%s",string);
		}
		printf("\n");
	}
	return 0;
}
