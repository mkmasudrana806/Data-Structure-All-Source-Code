/*to search binary first thing is, array should be sorted.binary search apply conquer and divide method.
we need to find array lower bound and higher bound.then find mid.
in binary search three casses happned.
1. data == mid; when it happned then return mid value.
2. data>mid; when it happned it means data up to the mid. now lower bound set o to the mid+1.
3. data<mid. when it happned it means data down to the mid position.that's why upper bound to mid-1.
since array is sorted.so data has either up the array,or down the mid position.
time coplexity .
*/
#include<stdio.h>
#define n 5
int main()
{
    int a[5]= {2,3,5,9,16};
    int i,item,lb=0,ub=5-1,mid;
    printf("enter item to search\n");
    scanf("%d",&item);
    int pos = search(a,5,item);
    if(pos==-1)
        printf("item is not found\n");
    else
        printf("item is found and positon is: %d\n",pos);
}
int search(int a[],int n,int item)
{
    int lb=0,ub=n-1,mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==item)
            return mid;
        else if(a[mid]<item)
            lb=mid+1;
        else
            ub=mid-1;
    }
    return -1;
}
