	#include<stdio.h>
	int main()
	{
		int x=0;
		float y=0;
		scanf("%d%f",&x,&y);
		printf("\n");
		if((y-x)<0.50||(x%5)!=0)
			printf("%0.2f",y);
		else
			printf("%0.2f",(y-(x+0.50)));
		return 0;
	}