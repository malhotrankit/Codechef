#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i=0,j=0,t=0,len=0,len1=0;
	char a[102],s[102];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%s",a);
		scanf("%s",s);
		len=strlen(a);
		for(i=0;i<len;i++)
			for(j=i+1;j<len;j++)
				if(a[j]==a[i])
					a[j]='\0';
		len1=strlen(s);
		for(i=0;i<len;i++)
			for(j=0;j<len1;j++)
				if(a[i]==s[j])
					count++;
		printf("%d\n",count);
	}
	return 0;
}





