#include<stdio.h>
int search(int [],int,int,int  );
int main()
{
    int a[5]= {5,1,3,9,0};
    int pos = search(a,5,0,9);
    if(pos==-1)
        printf("value is not found\n");
    else
        printf("vlaue is found at pos : %d\n",pos+1);
}

int search(int a[],int n,int index,int item)
{
    int i;
    if(index>n)
        return -1;
    if(a[index]==item)
        return index;
    else
    {
        index++;
        return search(a,5,index,item);
    }
    //return -1;

}
