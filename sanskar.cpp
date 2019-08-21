#include<iostream>
#include<math.h>
int main()
{
    long long array[22],j,sum,po,m;
    int n,t,dp[9][2097153],k,r,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        po=pow(2,n);
        sum=0;
        for(i=0;i<=k;i++)
           for(j=0;j<=po;j++)
               dp[i][j]=0;
        dp[0][0]=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&array[i]);
            sum+=array[i];
        }
        if(sum%k!=0||n<k)
            printf("no\n");
        else
        {
            if(sum==0)
            { printf("yes\n"); continue;}
            m=sum/k;
            for(i=0;i<k;i++)
            {
                for(j=0;j<po;j++)
                {
                    if(dp[i][j]==0)
                        continue;
                    sum=0;
                    for(r=0;r<n;r++)
                    {
                        if(j&(1<<r))
                            sum+=array[r];
                    }
                    sum-=i*m;
                    for(r=0;r<n;r++)
                    {
                        if(!(j&(1<<r)))
                        {
                            if(sum+array[r]==m)
                                dp[i+1][j|(1<<r)]=1;
                            if(sum+array[r]<m)
                                dp[i][j|(1<<r)]=1;
                        }
                    }
                } 
            }
        //}
        /*printf("\n");
        for(int i=0;i<=k;i++)
        {
           for(int j=0;j<po;j++)
           {
               printf("%d ",dp[i][j]);
           }
           printf("\n");
        }*/
        if(dp[k][po-1]==1)
            printf("yes\n");
        else
            printf("no\n");
        }
    }
    return 0;        
}