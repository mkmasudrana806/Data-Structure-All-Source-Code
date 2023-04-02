/*
It is basically linear method . it jumps target block where item may exit. Then  search linearly.
But condition  is array should be sorted.it work block block.
it work linearly but block block
*/
#include<stdio.h>
#include<math.h>
#define size 5
int search(int [], int,int );
int main()
{
    int a[size]= {1,3,5,9,29};
    int item=19;
    int pos = search(a,size,item);
    if(pos==-1)
        printf("not found\n");
    else
        printf("found\n");
}

int search(int a[], int n,int item)
{
    int blockSize=sqrt(n);
    printf("size of the block: %d",blockSize);
    int start=0;//first index start with zero.so we initialize start to zero.
    int next = blockSize; //first block size nisi,check korshi niche j upore item ase kina.thakle start and next change korshi.
    while(start<n && item>a[next-1])
    {
        //jokhon item ta next theke boro hobe,mane first block theke boro hobe tokhon amader next next block check korte hobe j r koto block porjoto boro hobe.
        //if item>next. we assign start=next and next to next+partitionsize.
        start = next;
        if(start>=n)//when start is greater arrary size then stop the loop.
            break;
        next = next + blockSize;
        if(next>n)//when next is greater to array size,then next=array last position.karon next ekmatro possible last array size porjonto.
            next = n;//if while don't work means first block ei item ase.tai for loop die linear search hobe.
    }
    for(int i=start; i<next; i++)
    {
        if(a[start]==item)
            return i;
    }
    return -1;
}
