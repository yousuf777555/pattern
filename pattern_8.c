#include<stdio.h>
int main()
{
int a=5,i,j,b=1;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",b++);
}
printf("\n");
}
}

