#include<stdio.h>
int main()
{
int num, sum=0;
do
{
printf("enter the numbers:\n");
scanf("%d",&num);
sum+=num;
}
while(num!=0);
printf("total =%d",sum);
return 0;
}
