#include<stdio.h>
void quickSort(int [],int,int);
int partition(int[],int,int);
int main()
{
    int a[5]= {5,3,9,2,8};
    int lb=0,ub=5-1;
    printf("sorted array is : \n");
    quickSort(a,lb,ub);
    print(a,5);
}

void print(int a[],int n)
{
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort ( int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }

}


int partition(int a[],int lb, int ub)
{
    int pivot,start,end;
    pivot=a[lb];
    start = lb;
    end = ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            swap(&a[start],&a[end]);
        }

    }
    swap(&a[lb],&a[end]);
    return end;
}
