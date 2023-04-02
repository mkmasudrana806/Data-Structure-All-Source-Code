// check a number is strong or not.a strong number is a number
//when each of digit factorial sum equal to the number.then it is called strong number.
#include<stdio.h>
int main()
{
    int num,number,fact,sum=0,rem;
    printf("enter a number\n");
    scanf("%d",&number);
    num = number;
    while(num!=0)
    {
        fact = 1;
        rem = num % 10;
        for(int i=1; i<=rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }
    printf("\nsummation of each digit factorial of this number is : %d\n",sum);
    //upore amra number k num variable a nie kaj koresi, kaoron number nie kaj korle to while loop a number zero te ashe.
    if(number ==sum)
        printf("%d is a strong number\n",number);
    else
        printf("%d is not a strong number\n",number);

}
