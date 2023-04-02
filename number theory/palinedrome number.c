#include<stdio.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("enter anumber \n");
    scanf("%d",&num);

    temp = num;
    while(num!=0)
    {

        rem = num % 10;

        sum = sum * 10 + rem;
        num = num / 10;
    }

    if(temp==sum)
        printf("%d is palinedrom\n",temp);
    else
        printf("%d is not palinedrome\n",temp);

}
