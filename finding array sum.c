/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

 int len(int l,int i)
  {
        
      l =  l + i; 
      
      return l;
      
       }  

int main()
{
     int a[100],i,j,k=0,l=1,n,sum=0,count=0,c=1;
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
      
           for(j=0; k<n ;j++)
           {
             /* if(j==n-1 && c <= 3)
              {
                  c++;
                  j=0;
                  continue;
              }
              sum = 0;
              */
               for(k=j; k<l && l<=n ;k++)
              {
                printf("sum=%d",sum);
                   sum = sum + a[k];
                   
                    
                    if((sum > count )&&( sum >=0 ))
                   {
                      count=sum;
                  
                      }
                
              }
              
               l=len(l,c);
           }
          
       
printf("%d",count);
    return 0;
}
