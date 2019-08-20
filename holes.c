	#include<stdio.h>
	int main()
	{
		int count=0,t=0,i=0;
		char string[102];
		scanf("%d",&t);
		while(t--)
		{       i=0;
			scanf("%s",string);
			count=0;
			while(string[i]!=NULL)
			{
				if(string[i]=='A')
					count++;
				if(string[i]=='B')
					count=count+2;
				if(string[i]=='D')
					count++;
				if(string[i]=='O')
					count++;
				if(string[i]=='P')
					count++;
				if(string[i]=='Q')
					count++;
				if(string[i]=='R')
					count++;
				i++;
			}
			printf("%d\n",count);
		}
		return 0;
	 }