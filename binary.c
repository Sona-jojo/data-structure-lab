#include<stdio.h>
void main()
{
int n,x,i,mid,a[100],left,right,flag=0;
c++;
printf("enterthe size of the array\n");
c++;
scanf("%d",&n);
c++;
printf("enter the lements ");
c++;
for(i=0;i<n;i++)
{
c++;
scanf("%d",&a[i]);
c++;
}
printf("enter the number to search");
c++;
scanf("%d",&x);
c++;
left=0;
c++;
right=n-1;
c++;
for(i=0;i<n;i++)
{
c++;
mid=(left+right)/2;
c++;
if(a[mid]==x)
{
c++;
flag=1;
break;
}
else if (x>a[mid])
{
left=mid+1;
}
else if (x<a[mid])
{
right=mid-1;
c++;
}
}
if(flag==1)
c++;
{
printf("the element is found\n");
c++;
}
else
{
printf("the element is not found\n");
c++;

}
}



