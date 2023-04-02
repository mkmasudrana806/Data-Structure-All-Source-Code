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
#define n 5
int search( int [], int, int, int );
int main()
{
    int a[n]= {2,3,5,6,10};
    int item=10,low=0,high=n-1;
    int pos=search(a,low,high,item);
    if(pos==-1)
        printf("not found\n");
    else
        printf("found this value\n");
}

//similary we recieving parameter like  array,low,high , and item same as binary search.
int search( int a[], int low, int high, int item)
{
    if(low<=high)
    {
        int partition = (high-low)/3;//we divide this array into three partition.
        int  mid1=low+partition;//find mid1 one, and mid2 .

        int mid2=high-partition;
        if(item==a[mid1])//here check that mid1 and item same or not,if same then return the mid1 value.
            return mid1;
        else if(item==a[mid2])
            return mid2;
        else if(item>a[mid2])//same as binary search we just change the low and high positon.
            return search(a,mid2+1,high,item);
        else if(item<a[mid1])
            return search(a,low,mid1-1,item);
        else
            return search(a,mid1+1,mid2-1,item);//this means item both greater mid1 and samller mid2.then we just change the low and high position.
    }

    return -1;

}
