/* 1.first array divided into two sublist.
2. first sublist divide until we get sublist 1 element.


*/

#include<stdio.h>
void mergeSort(int [],int ,int);
int merge(int a[],int lb,int mid,int ub)
{
              int b[lb+ub];
    int i=lb,j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j],j++,k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i],i++,k++;
        }
    }
}

int main()
{
    int a[5]= {5,33,2,9,90};
    int lb=0,ub=4;
    mergeSort(a,lb,ub);

    for(int i=0; i<5;i++)
              printf("%d ",a[i]);
}


void mergeSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
