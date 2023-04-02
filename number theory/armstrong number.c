//Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
/*
A positive integer is called Armstrong number of order n if, abcd…. =  an + bn + cn + dn + ….

For Example :- 153
13 + 53 + 33 = 1 + 125 + 27 = 153
So, 153 is an Armstrong number of order 3.

4150 = 45 + 15 + 55 + 05 = 1,024 + 1 + 3,125 + 0 = 4150
So, 4150 is an Armstrong number of order 5 .
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,temp,sum=0,n;
    printf("enter anumber \n");
    scanf("%d",&num);
    printf("enter order: ");
    scanf("%d",&n);


    temp = num;
    while(num!=0)
    {

        rem = num % 10;
        sum = sum + pow(rem, n);
        num = num / 10;
    }

    if(temp==sum)
        printf("%d is armstrong number\n",temp);
    else
        printf("%d is not an armstrong number\n",temp);

}

