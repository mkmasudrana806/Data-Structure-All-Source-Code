/*first we divide the array into two sublist.first is sorted sublist and second is unsorted sublist.
consider first element as a sorted sublist. and second unsorted sublist start second element to n.
now take one by one element from unsorted list and find the appropiate position in the sorted list.
since sorted list has one element so one element no need to check with other to find sorted or not.
algorithm for insertion sort.
1.unsorted list continue outer loop 1 to n.
2.now take element from unsorted list one by one then it store temp = a[i] variable.
3.inner continue a while loop .since sorted loop continue with before one to the unsorted list. so we assign j=i-1;
now check it's right position in the sorted list. just check before value with unsorted next value.
4.continue a while loop, loop is continuing when j>=0 && a[j]>a[i] condition is true.
5.inside the while loop we swap a[j+1] to a[j]; then decrease the j.
6. outside of the loop.when loop is not continue that means condition false.measn temp value remains still it's position.
6.1 so the temp value that we take from unsorted list and assign to the temp variable.when condition is false then the temp value remains still
6.2- that's why we assgin it a[j+1] = temp; since j is the before position of temp,so we increament by 1.means this is temp variable index.
thus we sort this method .
*why this is called insertion sort? because we insert one by one element from unsorted list and find right position in the sorted list.
*/
#include<stdio.h>
int main()
{
    int a[5]= {6,2,3,5,1};
    int i,j,temp;

    for(i=1; i<5; i++)
    {
        temp=a[i]; //assign unsorted element to temp variable. now we working with this variable.
        j=i-1;
        while(j>=0 && a[j]>temp) // loop continue greater than or equal to zero. because we decreament the variable j one by one.
        //when both the condition is true then enter inside the loop.and swap the variable and assign a[j] to  a[j+1];
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("the sorted list is \n");
    for(i=0; i<5; i++)
        printf("%d ",a[i]);

}
