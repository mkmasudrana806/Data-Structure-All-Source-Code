/*
Perfect number:- A number whose factors sum, except itself equals the same number.
Factors of 6 (except itself) are 1,2,3.
The Sum of these factors 1+2+3 = 6 So, 6 is a Perfect number.
*/


#include<stdio.h>
int main()
{
    int num,rem,factor,temp,sum=0;
    scanf("%d",&num);

    temp = num;

    for(int i=1; i<num; i++)
    {
        if(num%i==0)
            sum = sum + i;
    }

    if(sum==temp)
        printf("%d perfect number\n",temp);
    else
        printf("%d is not perfet number\n",temp);
}
