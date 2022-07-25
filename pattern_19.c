#include<stdio.h>
int main()
{
int a=6,i,j,n=0;
for(i=1;i<6;i++)
{
for(j=1;j<=i;j++)
{
n++;
if(n%2==0)
printf("0 ");
else
printf("1 ");
}
printf("\n");
}
}

