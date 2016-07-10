#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,q,i,j=1;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
printf("Enter the pair:");
scanf("%d",&q);
for(i=0;i<2*n;i++)
{
x=2*n-i;
if(q!=x)
{
printf("The pair is%d for days %d is %d\n",q,j++,q);
}
}
getch();
}
