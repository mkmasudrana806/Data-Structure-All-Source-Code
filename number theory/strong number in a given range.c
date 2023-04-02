// check a number is strong or not.a strong number is a number
//when each of digit factorial sum equal to the number.then it is called strong number.
#include<stdio.h>
int main()
{
    int num,number,fact,sum,rem,start,end;
    printf("enter start and end range\n");
    scanf("%d%d",&start,&end);
    int j;
    for(j=start; j<=end; j++)
    {
        num = j;
sum = 0;
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

        if(sum==j)
        {
              printf("%d ",j);
        }


    }

}

