//binary search in array using recursive method.
#include<stdio.h>
int binary_search_using_recursive(int[],int,int,int);
int main()
{
    int a[5]= {2,5,6,9,10};
    int lb,ub,item;
    printf("enter your desire item\n");
    scanf("%d",&item);
    int pos = binary_search_using_recursive(a,0,5-1,item);
    if(pos==-1)
        printf("not found\n");
    else
        printf("found this item,index is: %d and pos is: %d",pos,pos+1);
}

int binary_search_using_recursive(int a[],int lb,int ub,int item)
{
    int mid;
    if(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==item)
            return mid;
        else if(item>a[mid])
//here just call function and increase lower bound to mid+1;
            return binary_search_using_recursive(a,mid+1,ub,item);
        else
//here just call function and decrease upper bound to mid-11;
            return binary_search_using_recursive(a,0,mid-1,item);
    }
    return -1;//when if condition is not return anything then this return work.
}
