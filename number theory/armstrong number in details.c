



/*
ARMSTRONG NUMBER LOGIC
To understand the logic of Armstrong nos, one needs to remember that the Armstrong number property is true in any number system. Let us take the number 548834 with 6 digits and see if it satisfies the property of Armstrong numbers. Use the equation

 5^6 4^6 8^6 8^6 3^6 4^6 =? Calculate the sum obtained by raising each of the digits to the power of six and adding together the sum of the terms obtained. The total is 548834 which is the original number itself. Thus 548834 is an Armstrong number since one gets the same number when one adds the individual terms of the digits in the number raised to the power of the number of digits in the number.

Let us look at what is Armstrong number by taking the number 122. In base 3 to check if 122 is an Armstrong no, perform the operation 1^3 2^3 2^3=17. In base 3 the operation is the same as 2*1 2*3 1*9=17. Important to note here is that 3 to the power of zero is equal to 1, and 3 to the power of 1 is 3, and 3 to the power of two is 9. Totalling the terms obtained we get 17. This means that an Armstrong number can exhibit the same property in any given number system.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,temp,sum=0,n,digit=0;
    printf("enter anumber \n");
    scanf("%d",&num);

    temp = num;
    while(temp!=0)
    {
                  digit++;
                  temp = temp  / 10;
    }

    temp = num;
    while(num!=0)
    {
        rem = num % 10;
        sum = sum + pow(rem, digit);
        num = num / 10;
    }

    if(temp==sum)
        printf("%d is armstrong number\n",temp);
    else
        printf("%d is not an armstrong number\n",temp);

}
