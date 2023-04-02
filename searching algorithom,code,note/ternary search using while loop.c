/*
ternary search means we divide array to three partition .
partitionSize=(low+high)/3; here we divide array size into three part.
mid1=low+partition;
mid2=high-partition;

in ternary search three thing would be happened.

item==mid1
item==mid2
item>mid2
item<mid1
item<mid2 && mid1<item.

these five thing happened when we use ternary search.
*/
#include<stdio.h>
#define size 5
int search( int [],int, int );
int main()
{
    int a[size]= {2,3,5,6,10};
    int item=1;
    int pos=search(a,size,item);
    if(pos==-1)
        printf("not found\n");
    else
        printf("found this value\n");
}

//similary we recieving parameter like  array,low,high , and item same as binary search.
int search( int a[],int n,int item)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int partition = (high-low)/3; //we divide this array into three partition.
        int  mid1=low+partition; //find mid1 one, and mid2 .
        int mid2=high-partition;

        if(item==a[mid1])//here check that mid1 and item same or not,if same then return the mid1 value.
            return mid1;
        else if(item==a[mid2])
            return mid2;

        else if(item>a[mid2])//same as binary search we just change the low and high positon.
            low=mid2+1;
        else if(item<a[mid1])
            high=mid1-1;
        else
        { //when item inside the mid1 and mid2.low=0 to low=mid1+1 and high=size-1 to high=mid2-1 assign.
            low=mid1+1;
            high=mid2-1;
        }
    }
    return -1;

}

