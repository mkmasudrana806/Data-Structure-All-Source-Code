/*
first we take to prevot element.
then  we have to partitioned the array.akhon jara prevot element er less ase tader k previous a pathabo prevot er.
r jara greater ase oder k prevot er upore pathabo.r jara same tader either before or after the prevot.

*/
#include<stdio.h>
int main()
{
    int a[5]= {3,1,5,2,9};
    int lb=0,ub=5-1;
    partition(a,lb,ub);

}

int  partition(int a[],int lb,int ub)
{
   int  prevot=a[lb];
    int start = lb;
    int end = ub;

    while(start<end)
    {
                  while(a[start]<=prevot)
    {
        start++;
    }

    while(a[end]>prevot)
    {
        end--;
    }

    if(start<end)
    {
        swap(a[start],a[end]);
    }
    }

swap(a[lb],a[end]);


}
