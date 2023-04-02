//bubble sort algorithm.
#include<stdio.h>
int main()
{
    int a[5]= {9,2,3,1,8};
    int i,j,temp;
    for(i=0; i<5-1; i++)
    {
        for(j=0; j<5-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0; i<5; i++)
        printf("%d ",a[i]);
//time complexity: best case O(n).when array is already sorted.
//time complexity: worst case O(n^2). (n-1)*(n-1) approximately n^2.

}

//optimized bubble sort.when we use swap=0 condition.

/*#include<stdio.h>
int main()
{
    int a[5]= {9,2,3,1,8};
    int i,j,temp,count=0;
    for(i=0; i<5-1; i++)
    {
        int swap=0;
        for(j=0; j<5-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap=1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
            count++;
        }

    }
    printf("count = %d\n",count);

    for(i=0; i<5; i++)
        printf("%d ",a[i]);
//time complexity: best case O(n).when array is already sorted.
//time complexity: worst case O(n^2). (n-1)*(n-1) approximately n^2.

}
*/
