// delete  array element by value at order of O(n) times in an unsorted array
#include<stdio.h>
void array_print(int [], int);
int main()
{
    int arr[50],size,i,value,index=-1;
    printf("Enter Array size: ");
    scanf("%d",&size);
    printf("Enter array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    array_print(arr, size);

    printf("which value want to delete: ");
    scanf("%d",&value);


    for(i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
// first found value index and then direct delete this element by put end of the array element in this position
// for unsorted array this algorithm
index=i;
           arr[index] = arr[size-1];
           size--;
            break;
        }
    }
    if(index==-1)
    {
        printf("value not found in this array: ");
    }
    array_print(arr, size);
}
void array_print(int *a, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",*a++);
    }
}

