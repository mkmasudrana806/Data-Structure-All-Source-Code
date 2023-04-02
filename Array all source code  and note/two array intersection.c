#include<stdio.h>
int main()
{
    int a[5]= {5,2,1,3,2};
    int b[5]= {5,9,8,3,4};
    int i,j,temp[10];
    for(i=0,j=5; i<5,j<10; i++,j++)
    {
        temp[i] = a[i];
        temp[j] = b[i];
    }
    for(i=0; i<10; i++) // 2,5,3,9,8
    {
        int min=i;// 5
        for(j=i+1; j<10; j++) // 2
        {
            if(temp[min]>=temp[j]) // 5>3,
            {
                min =j; // min = 3
            }
        }
        swap(&temp[min],&temp[i]);
    }
    for(i=0; i<10; i++)
        if(temp[i]!=temp[i+1])
            printf("%d ",temp[i]);
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
