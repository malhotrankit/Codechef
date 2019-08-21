#include<iostream>
#include<math.h>
using namespace std;


/*********************************************/
int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3,1, 2, 2, 3, 2, 3, 3, 4};  
  
/* Recursively get nibble of a given number  
and map them in the array */
unsigned int countSetBitsRec(unsigned int num)  
{  
    int nibble = 0;  
    if (0 == num)  
        return num_to_bits[0];  
      
    // Find last nibble  
    nibble = num & 0xf;  
      
    // Use pre-stored values to find count  
    // in last nibble plus recursively add  
    // remaining nibbles.  
    return num_to_bits[nibble] +  
            countSetBitsRec(num >> 4);  
}
/***********************************************/
    
int main()
{
    int t,present[131072],q,i,odd,even,p,n,k;
    scanf("%d",&t);
    while(t--)
    {
            odd=0;
            even=0;
            for(i=0;i<131072;i++)
                present[i]=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&q);
                if(present[q]==0)
                {
                    for(k=0;k<131072;k++)
                    {
                        if(present[k]==1)
                        {
                           p=k^q;
                           if(present[p]==0)
                           {
                             present[p]=1;    
                             if(countSetBitsRec(p)%2==0)
                              even++;
                             else
                              odd++;
                           }
                        }
                    }
                    present[q]=1;
                    if(countSetBitsRec(q)%2==0)
                        even++;
                    else
                        odd++;
                    
                }
                printf("%d %d\n",even,odd);
            }
        }
        return 0;
}