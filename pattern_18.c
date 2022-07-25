#include<stdio.h>
int main()
{
int a=5,i,j,b=97;
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",b++);
}
printf("\n");
}
}
