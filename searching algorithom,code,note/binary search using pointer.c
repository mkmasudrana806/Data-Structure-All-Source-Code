// binary search using pointer.
int search(int *,int ,int );
#include<stdio.h>
int main()
{
    int a[ ]= {2,5,6,9,29,324,699};
    int n=sizeof(a)/sizeof(a[0]);//find the array size.
    int k;
    printf("enter value to serach\n");
    scanf("%d",&k);
    int pos=search(a,n,k);//call the function by array,size,value.
    if(pos==-1)
        printf("not found\n");
    else
        printf("pos is: %d",pos);


}

//we use base address of array using pointer *p.
int search(int *p,int n,int k)
{
    int lb,ub,mid;
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(*(p+mid)==k)// *(p+mi) means value of (p+mid) this address.
            return mid;
//same we compare value with array element using pointer.
        else if(k>*(p+mid))
            lb=mid+1;
        else
            ub=mid-1;

    }
    return -1;
}
