#include<stdio.h>
void main()
{
int n,rem,i,sum=0,rem1,sum1,n2,sum2,nn,s=0,s2,n3,f,n4;
printf("\n enter num");
scanf("%d",&n);
n1=n%10;
nn=n;
f=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;}
printf("\n %d",sum);
sum1=sum-n1;
printf("\n %d",sum1);
n2=nn/10;
n3=n2%10;
n4=n2/10;
while(n2>0)
{
rem1=n2%10;
s=s+rem1;
n2=n2/10;
}
s2=s-n3;
printf("\n %d",s2);
f=n4/10;
printf("\n %d",f);
printf("\n %d",sum+sum1+s2+f);
}



