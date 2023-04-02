//we divide into two sublist.first one element is sorted
// next to end is unsorted list.
//one by one value put in sorted sublist apppropiate position.

#include<stdio.h>
int main()
{
    int a[5]= {9,29,3,1,8};
    int i,j,temp;

    for(i=1; i<5; i++)
    {
        temp = a[i]; // unsorted sublist value
        j=i-1; // sorted sublist.always before the unsorted sublist.

        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp; //when while loop false,so temp value okhanei rekhe ditehobe.


    }


    for(i=0; i<5; i++)
        printf("%d ",a[i]);
//time complexity: best case O(n).when array is already sorted.
//time complexity: worst case O(n^2). (n-1)*(n-1) approximately n^2.

}
