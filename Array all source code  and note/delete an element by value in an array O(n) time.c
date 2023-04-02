// delete  array element by value at order of O(n) times
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
            index=i; // first found value index
            break;
        }
    }
    // after founding index then continue loop but before checking index number
    if(index==-1)
    {
        printf("value not found in this array: ");
    }
    else if(index==size-1){
              size--;
    }
    else
    {
        for(i=index; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
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

