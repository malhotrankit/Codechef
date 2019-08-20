#include<stdio.h>
#include<math.h>
int main()
{
	int t=0;
	float l=0,b=0,h=0,v=0,p=0,s=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%f",&p,&s);
		l=b=h=v=0;
		l=(p-sqrt(p*p-24*s))/12;
		b=l;
		h=((p/4)-(2*b));
		v=l*b*h;
		printf("%.2f\n",v);

	}
	return 0;
}