#include<stdio.h>
void swap(int *,int *);
int main()
{
    int i,j,min,a[5]= {5,2,3,9,8};
    for(i=0; i<5; i++) // 2,5,3,9,8
    {
        min=i;// 5
        for(j=i+1; j<5; j++) // 2
        {
            if(a[min]>=a[j]) // 5>3,
            {
                min =j; // min = 3
            }
        }
        swap(&a[min],&a[i]);
    }
    printf("first smallest number is : %d\n",a[0]);
    printf("second smallest number is : %d\n",a[1]);
    printf("first largest number is : %d\n",a[4]);
    printf("second largest number is : %d\n",a[3]);
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
