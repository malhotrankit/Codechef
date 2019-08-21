#include<stdio.h>
	void calculate(const int x,const int y,const int *z,const int * const ptr);
	int main()
	{
	int n=0,m=0,t=0,i=0;
	int a[22];
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	calculate(n,m,a,a);
	}
	return 0;
	}
	void calculate(const int x,const int y,const int *z,const int * const ptr)
	{
	int b=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,last=0;
	int flag=0;
	if(x>0)
	{
	z=ptr;
	for(i=0;i<x;i++)
	{
	if(y==(*z))
	{
	flag=1;
	goto a1;
	}
	z++;
	}
	goto c2;
	}
	c2:  if(x>1)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	if(y==(z[i]+z[j]))
	{
	flag=1;
	goto a1;
	}
	goto c3;
	}
	c3: if(x>2)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	if(y==(z[i]+z[j]+z[k]))
	{
	flag=1;
	goto a1;
	}
	goto c4;
	}
	c4: if(x>3)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	if(y==(z[i]+z[j]+z[k]+z[l]))
	{
	flag=1;
	goto a1;
	}
	goto c5;
	}
	c5: if(x>4)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]))
	{
	flag=1;
	goto a1;
	}
	goto c6;
	}
	c6: if(x>5)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]))
	{
	flag=1;
	goto a1;
	}
	goto c7;
	}
	c7: if(x>6)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]))
	{
	flag=1;
	goto a1;
	}
	goto c8;
	}
	c8: if(x>7)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]))
	{
	flag=1;
	goto a1;
	}
	goto c9;
	}
	c9: if(x>8)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]))
	{
	flag=1;
	goto a1;
	}
	goto c10;
	}
	c10: if(x>9)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]))
	{
	flag=1;
	goto a1;
	}
	goto c11;
	}
	c11: if(x>10)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]))
	{
	flag=1;
	goto a1;
	}
	goto c12;
	}
	c12: if(x>11)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]))
	{
	flag=1;
	goto a1;
	}
	goto c13;
	}
	c13: if(x>12)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]))
	{
	flag=1;
	goto a1;
	}
	goto c14;
	}
	c14: if(x>13)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]))
	{
	flag=1;
	goto a1;
	}
	goto c15;
	}
	c15: if(x>14)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]))
	{
	flag=1;
	goto a1;
	}
	goto c16;
	}
	c16: if(x>15)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	for(b=w+1;b<x;b++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]+z[b]))
	{
	flag=1;
	goto a1;
	}
	goto c17;
	}
	c17: if(x>16)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	for(b=w+1;b<x;b++)
	for(f=b+1;f<x;f++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]+z[b]+z[f]))
	{
	flag=1;
	goto a1;
	}
	goto c18;
	}
	c18: if(x>17)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	for(b=w+1;b<x;b++)
	for(f=b+1;f<x;f++)
	for(g=f+1;g<x;g++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]+z[b]+z[f]+z[g]))
	{
	flag=1;
	goto a1;
	}
	goto c19;
	}
	c19: if(x>18)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	for(b=w+1;b<x;b++)
	for(f=b+1;f<x;f++)
	for(g=f+1;g<x;g++)
	for(h=g+1;h<x;h++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]+z[b]+z[f]+z[g]+z[h]))
	{
	flag=1;
	goto a1;
	}
	goto c20;
	}
	c20: if(x>19)
	{
	z=ptr;
	for(i=0;i<x;i++)
	for(j=i+1;j<x;j++)
	for(k=j+1;k<x;k++)
	for(l=k+1;l<x;l++)
	for(m=l+1;m<x;m++)
	for(n=m+1;n<x;n++)
	for(o=n+1;o<x;o++)
	for(p=o+1;p<x;p++)
	for(q=p+1;q<x;q++)
	for(r=q+1;r<x;r++)
	for(s=r+1;s<x;s++)
	for(t=s+1;t<x;t++)
	for(u=t+1;u<x;u++)
	for(v=u+1;v<x;v++)
	for(w=v+1;w<x;w++)
	for(b=w+1;b<x;b++)
	for(f=b+1;f<x;f++)
	for(g=f+1;g<x;g++)
	for(h=g+1;h<x;h++)
	for(last=h+1;last<x;last++)
	if(y==(z[i]+z[j]+z[k]+z[l]+z[m]+z[n]+z[o]+z[p]+z[q]+z[r]+z[s]+z[t]+z[u]+z[v]+z[w]+z[b]+z[f]+z[g]+z[h]+z[last]))
	{
	flag=1;
	goto a1;
	}
	}
	a1:;
	if(flag==1)
	printf("Yes\n");
	else
	printf("No\n");
	} 