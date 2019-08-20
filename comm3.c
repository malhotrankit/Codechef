#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3,X1,Y1,X2,Y2,X3,Y3,t,sum,d;
	float a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d%d",&d,&x1,&y1,&x2,&y2,&x3,&y3);
		sum=0;
		X1=x2-x1;
		if(X1<0)
			X1=(-1)*X1;
		Y1=y2-y1;
		if(Y1<0)
			Y1=(-1)*Y1;
		X2=x1-x3;
		if(X2<0)
			X2=(-1)*X2;
		Y2=y1-y3;
		if(Y2<0)
			Y2=(-1)*Y2;
		X3=x2-x3;
		if(X3<0)
			X3=(-1)*X3;
		Y3=y2-y3;
		if(Y3<0)
			Y3=(-1)*Y3;
		a=(float)sqrt((X1*X1)+(Y1*Y1));
		b=(float)sqrt((X2*X2)+(Y2*Y2));
		c=(float)sqrt((X3*X3)+(Y3*Y3));
		if(a<=(float)d)
			sum++;
		if(b<=(float)d)
			sum++;
		if(c<=(float)d)
			sum++;
		if(sum>=2)
			printf("yes\n");
		else
			printf("no\n");
		}
		return 0;
}



