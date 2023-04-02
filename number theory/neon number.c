//a number is neon when the square of this number and this square number each digit sum equl to orginal number,then it is called neon number
#include<stdio.h>
int main()
{
              int num,sum,square,rem,temp;
              scanf("%d",&num);
              temp = num;


              square = temp * temp;

              while(square!=0)
              {
                            rem = square % 10;

                            sum = sum + rem;
                            square = square /10;
              }
              if(num==sum)
                            printf("%d is a neon number\n",num);
              else
                            printf("%d is not a neon number \n",num);
}
