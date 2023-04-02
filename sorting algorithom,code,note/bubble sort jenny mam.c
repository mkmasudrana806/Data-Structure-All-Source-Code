//bubble sort compare adjacent two element.means kasa kasi two element,it check condition that first element greater than second or second is greater is than first.

#include<stdio.h>
#define n 5
int main()
{
    int a[n]= {5,2,1,9,3};
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            //when i vlaue is 1,comparision hoi n-1-i. kenona outer loop continue n-1.
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}
