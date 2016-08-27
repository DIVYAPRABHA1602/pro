#include<stdio.h>
void main()
{
int a[5],i,j,sum,min,max;
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
min=a[0];max=a[5];
for(i=1;i<=5;i++)
{
if(min>a[i])
{
min=a[i];
}
}
for(j=5;j<=0;j--)
{
if(max<a[i])
{
max=a[i];
}
}
sum=min+max;
printf("%d",sum);
}
