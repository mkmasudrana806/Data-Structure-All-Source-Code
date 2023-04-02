#include<stdio.h>
int search(int [],int,int);
int main()
{
    int a[5]= {2,5,1,3,9};
    int i,item=9;
    int res = search(a,5,item);
    if(res==-1)
        printf("not found\n");
    else
        printf("%d found at position %d\n",item,res+1);
}

int search( int *a,int n,int item)
{
    int i;
    for(i=0; i<n ; i++)
    {
        if(*(a+i)==item)
        {
            return i;
            break;
        }

    }
    return -1;
}
