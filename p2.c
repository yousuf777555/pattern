#include<stdio.h>
int main()
{
int n=5,i,j;
for(i=n;i>0;i--)
{
for(j=n;j>=i;j--)
{
printf("%d",i);
}
printf("\n");
}
}

