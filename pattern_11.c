#include<stdio.h>
int main()
{
int a=5,i,j,c=1;
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
if(j%2==0)
{
printf("%d ",i);
}
else
{
printf("%d ",-i);
}
}
printf("\n");
}
}
