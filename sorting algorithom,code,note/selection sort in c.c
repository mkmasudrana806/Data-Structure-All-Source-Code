#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a[5]= {9,2,3,1,8};
    int i,j,temp;

    for(i=0; i<5; i++)
    {
        int min=i; //set first element as min index;
        for(j=i+1; j<5; j++)
        {
            if(a[min]>a[j]) //compare min index with next all element
                min=j; //assign min as j when condition is true.
        }
        if(min!=i) // when min no equal to i then swap function call only.
            swap(&a[i],&a[min]);
    }

    for(i=0; i<5; i++)
        printf("%d ",a[i]);

}


void swap(int *a, int *b)

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
