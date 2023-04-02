// exponential search mainly smaller binary search.
//time complexity for exponential search is : O(log i).
#include<stdio.h>
#include<stdlib.h>
#define size 10
int biSearch(int [],int,int,int,int);
int  expSearch(int [],int ,int ,int );
int main()
{
    int a[size]= {2,5,9,10,99,345,400,509,698,798};
    int item=509;
    int pos = expSearch(a,0,size,item);
    if(pos==-1)
        printf("not found\n");
    else
        printf("found and pos %d\n",pos+1);
}


int  expSearch(int a[],int start,int end,int item)
{
    if((end-start) <=0)
        return -1;
    int bounce=1;
    while(bounce<(end-start))
    {
        if(a[bounce]<item)
            bounce*=2;
        else
            break;
    }
    return biSearch(a,bounce/2,bounce,item);
}


int biSearch(int a[],int low,int high,int item)
{
    printf("low = %d \n high = %d\n",low,high);
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==item)
        {
            return mid;
        }
        else if(a[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

