#include<stdio.h>
void main()
{
       int a[50],count=0,n,i,x,time=0;
       time++;
       time++;
       printf("enter the number of elements in an array \n");
       time++;
       scanf("%d",&n);
       time++;
       printf("enter the numbers");
       time++;
       for(i=0;i<n;i++)
       {
       time++;
       scanf("%d",&a[i]);
       time++;
       }
       time++;
       printf("enter the number to search");
       time++;
       scanf("%d",&x);
       time++;
       for(i=0;i<n;i++)
       {
       time++;
       if(x==a[i])
       {
       count++;
       printf("the elements finds at %d position\n",i+1);
       time++;
       }
       }
       time++;
       if(count>0)
       {
       time++;
       printf("elements is found %d times\n",count);
       time++;
       }
       else 
       {
       printf("the element is not found ");
       time++;
       }
       printf("space complexity is %d \n",(4*n)+20); 
       time++;
       time++;
       printf("the time complexity is %d\n",time );
  }
       
       
     
       
       


     
       
      
       
       
       
       
       
       
       
     
       

