//this is the linear search using pointer.
#include<stdio.h>
int search(int *,int ,int );
int main()
{
    int a[ ]= {2,5,6,9,1,29,324,7};
    int n=sizeof(a)/sizeof(a[0]);
    int value;
    printf("enter value to search\n");
    scanf("%d",&value);
//here call by reference,array passing means base address passing.
    int pos=search(a,n,value);
    if(pos==-1)
        printf("value is not found\n");
    else
        printf("vlaue is found and pos is :%d\n",pos+1);
}



int search(int *p,int n,int k)//here we reciive array base address and store it pointer variable.
{
    int i;
    for(i=0; i<n; i++)
    {//here we check sequencially usig poiinter. *(p+i)=means value of this "(P+1)" varialble addres.
        if(*(p+i)==k)
        {
            return i;//if condition true then return index i;
        }
    }
    return -1;//when conditon false then return -1;
}
