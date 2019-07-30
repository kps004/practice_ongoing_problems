/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int a[100],i,j,k=0,l=1,n,sum=0,count=0,c=1;
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
      
           for(j=0; j<n ;j++)
           {
              if(j==n-1 && c <= 3)
              {
                  c++;
                  j=0;
                  continue;
              }
              sum = 0;
              
               for(k=j; ((k <= j+c )&& (j+c < n ));k++)
              {
                   sum = sum + a[k];
                   
                  }
                    
                    if((sum > count )&&( sum >=0 ))
                   {
                      count=sum;
                  
                      }
                
              }
          
       
   printf("%d",count);
    return 0;
}
