	#include<stdio.h>
	#include<malloc.h>
	struct data
	{
		unsigned long  data;
		struct data *link;
	};
	typedef struct data DATA;
	void main()
	{
		unsigned long k=0,n=0,i=0,count=0;
		DATA *first,*x,*tail;
		scanf("%lu %lu", &n, &k);
		first=(DATA*)malloc(sizeof(DATA));
		scanf("%lu",&first->data);
		tail=first;
		for(i=0;i<n-1;i++)
		{
			x=(DATA*)malloc(sizeof(DATA));
			scanf("%lu",&x->data);
			tail->link=x;
			tail=x;
		}
		printf("\n");
		tail=first;
		while(tail!=NULL)
		{
			if((tail->data)%k==0)
				count++;
			tail=tail->link;
		}
		printf("%lu",count);
		free(first);
	}