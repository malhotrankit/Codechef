#include<stdio.h>
int main()
{
	int ds,dt,d,t,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d%d%d",&ds,&dt,&d);
		if(ds+dt>=d&&ds+d>=dt&&dt+d>=ds)
			printf("%d\n",ans);
		else if(ds+dt>d&&ds+d<dt&&dt+d>ds)
		{
			ans=dt-d-ds;
			printf("%d\n",ans);
		}
		else if(ds+dt>d&&ds+d>dt&&dt+d<ds)
		{
			ans=ds-dt-d;
			printf("%d\n",ans);
		}
		else
		{
			ans=d-ds-dt;
			printf("%d\n",ans);
		}
	}
	return 0;
}

