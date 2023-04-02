#include<stdio.h>
void merge(int [],int,int,int);
void mergeSort(int [],int,int);
int temp[5];
int main()
{
    int a[5]= {5,1,3,2,0};
    int lb=0,ub=4;
    mergeSort(a,lb,ub);
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
}



void mergeSort(int a[],int lb,int ub)
{
    printf("array: ");
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\nlb = %d\n ub = %d\n",lb,ub);
    int mid;
    if(lb<ub)
    {
        printf("\ncondition %d < %d\n",lb,ub);
        mid = (lb+ub)/2;
        printf("\nmid = %d\n",mid);
        mergeSort(a,lb,mid);
        printf("\nlb to mid complete\n");
        printf("\nlb=%d\nub=%d\nmid=%d\n",lb,ub,mid);
        mergeSort(a,mid+1,ub);
        printf("\nlb=%d\nub=%d\nmid=%d\n",lb,ub,mid);
        merge(a,lb,mid,ub);
    }
}


void merge(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<mid && j<ub)
    {
        if(a[i]<=a[j])
        {
            temp[k] = a[i];
            i++,k++;
        }
        else
        {
            temp[k] = a[j];
            j++,k++;
        }
    }

    if(i>mid)
    {
        while(j<ub)
        {
            temp[k] = a[j];
            j++,k++;
        }
    }

    else
    {
        while(i<=mid)
        {
            temp[k]=a[i];
            k++,i++;
        }
    }

    for(k=lb; k<=ub; k++)
        a[k] = temp[k];
}
