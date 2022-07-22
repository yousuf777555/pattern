#include<stdio.h>
int main()
{
int a=5,i,j,c=1;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
if(i%2==0)
{
printf("*");
}
else
{
printf("%d",c);
}
}
if(i%2!=0)
{
c++;
}
printf("\n");
}
}
