#include<stdio.h>
void main()
{
int i=1,j,n,temp,a[100],c;
c++;
printf("enter the number of elements");
c++;
scanf("%d",&n);
c++;
printf("enter the elements");
c++;
for(i=0;i<n;i++)
{
c++;
scanf("%d",&a[i]);
}
while(i<n)
{
c++;
temp=a[i];
c++;
j=i-1;
c++;
while(j>=0&&temp<a[j])
{
a[j+1]=a[j];
j--;
c++;
}
a[j+1]=temp;
i++;
}
printf("the sorted array is \n");
c++;
i=0;
for(i=0;i<n;i++)
{
c++;
printf("%d\n",a[i]);
c++;
}
printf("the space complexity =%d\n",(4*n+32));
c++;
printf("the time complexity =%d",c);
}


