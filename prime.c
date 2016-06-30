#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
a=1;
break;
}
}
if(a==0)
{
printf("prime number");
}
else
printf("Not a prime number");
getch();
}
