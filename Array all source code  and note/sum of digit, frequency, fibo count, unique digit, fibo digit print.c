#include<stdio.h>
float sum(int  digit[ ],int size)
{
    int sum = 0,i;
    for(i=0; i<size; i++)
    {
        sum = sum + digit[i];
    }
    return sum;
}


int count(int id,int size)
{
    int i,rem,count=0;
    for(i=0; i<size; i++)
    {
        count++;
        rem  = id%10;
        id = id /10;
    }
    return count;
}


int fiboCount(int digit[],int size)
{
    int count=0,i;
    for(i=0; i<size; i++)
    {
        if(digit[i]==0 || digit[i]==1 ||digit[i]==2 ||digit[i]==3 ||digit[i]==5 ||digit[i]==8)
            count++;
    }
    return count;
}
void freqiency(int digit[],int size)
{
    int i,j,freq[10]= {0};
    for(i=0; i<size; i++)
    {
        for(j=0; j<=size; j++)
        {
            if(digit[i]==j)
            {
                freq[j]++;
            }
        }
    }
    for(i=0; i<10; i++)
    {
        if(freq[i]>0)
        {
            printf("%d coccurs %d times\n",i,freq[i]);
        }
    }
}


void unique(int digit[], int size)
{
    int ctr=0;
    int i, j, k;
    printf("\nThe unique elements found in the array are: ");
    for(i=0; i<size; i++)
    {
        ctr=0;
        for(j=0,k=size; j<k+1; j++)
        {
            if (i!=j)
            {
                if(digit[i]==digit[j])
                {
                    ctr++;
                }
            }
        }
        if(ctr==0)
        {
            printf("%d ",digit[i]);
        }
    }
}

int main()
{
    int id,rem,i,digit[9];
    printf("Enter your id: ");
    scanf("%d",&id);
    for(i=0; i<9; i++)
    {
        rem = id % 10;
        digit[i] = rem;
        id = id/10;
    }
    float result = sum(digit,9);
    int numOfDigits= count(id,9);
    printf("\nSum of all digits: %.2f\n\n",result);
    printf("All digits count: %d\n\n",numOfDigits);

    int res = fiboCount(digit,9);
    printf("Fibonacci total: %d\n\n",res);

    freqiency(digit,9);
    printf("\n");
    unique(digit,9);

    return 0;
}

