#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	double l , s , d ,c,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&l,&d,&s,&c);
		sum = (s)*pow(c+1,d-1);
		if(sum >= l)
			printf("ALIVE AND KICKING\n");
		else
			printf("DEAD AND ROTTING\n");
	}
	return 0;
}  