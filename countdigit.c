/*count the number of digit*/
#include <stdio.h>
int main()
{
int num;
int count=0;
printf("enter the number:");
scanf("%d\n",&num);
while (num!=0)
{
count++;
num= num/10;
printf("num:%d",num);
}
printf("number of digits:%d\n",count);
return 0;
}
