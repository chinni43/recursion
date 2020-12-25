#include<stdio.h>
int sum_of_digit(int n)
{
int(n==0)
return 0;
return (n%10+sum_of_digit(n/10));
}
int main()
{
int num=1234;
printf("input number :%d \n",num);
int result=sum_of_digit(num);
printf("sum of digits :%d\n",result);
return 0;
}
