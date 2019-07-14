
/* program for finding power of two*/
#include <stdio.h>

int main()
{
int num;
scanf("%d",&num);
if((num & (num-1))==0){
printf("the number is power of 2\n");
}
else {
printf("the number is not power of 2\n");}
return 0;
}
