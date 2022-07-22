#include<stdio.h>
int main()
{
int a=5,i,j;
for(i=a-1;i>=0;i--)
{
for(j=a-1;j>=i;j--)
{
printf("%c",97+j);
}
printf("\n");
}
}
