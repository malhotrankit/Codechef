#include <stdio.h>
#include <string.h>
char str[10000];
int main()
{
	int t,len;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		len=strlen(str);
		if(len==1&&str[len-1]=='1')
			printf("0\n");
		else if(len>1&&((int)str[len-1])%2==1)
		{
			str[len-1]=((int)str[len-1])-1;
			printf("%s\n",str);
		}
		else if(len>=1&&((int)str[len-1])%2==0)
			printf("%s\n",str);
		else
		{
			str[len-1]=((int)str[len-1])-1;
			printf("%s\n",str);
		}
	}
	return 0;
}