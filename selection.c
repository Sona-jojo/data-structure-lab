#include<stdio.h>
void main()
{
int n,i=0,j,small,a[20],temp,c=0;
printf("enter the number of elements");
c++;
scanf("%d",&n);
c++;
printf("enter the elements:\n");
c++;
for(i=0;i<n;i++)
{
c++;
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
c++;
small=i;
 for(j=i+1;j<n;j++)
 {
 c++;
 if(a[small]>a[j])
 c++;
 {
 small=j;
 }
 }
 if(small!=i)
 {
 c++;
 temp=a[i];
 c++;
 a[i]=a[small];
 c++;
 a[small]=temp;
 c++;
 }
 }
 printf("the sorted elements are:\n");
 c++;
 for(i=0;i<n;i++)
 {
 c++;
 printf("%d \t",a[i]);
 }
 c++;
 printf("the space complexity= %d \n",(4*n*32));
 c++;
 printf("the time complexity =%d",c);
 }
 
 
 
