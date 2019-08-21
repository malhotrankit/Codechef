#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%f",&x,&y);
		if(x>y)
		       printf("%f %f\n",sqrt(pow(x,2)-pow(y,2)),sqrt(pow(x,2)+pow(y,2)));
		else if(y>x)
			printf("%f %f\n",sqrt(pow(y,2)-pow(x,2)),sqrt(pow(x,2)+pow(y,2)));
		else
			printf("%f %f\n",sqrt(pow(x,2)+pow(y,2)),sqrt(pow(x,2)+pow(y,2)));

	}
	return 0;
}