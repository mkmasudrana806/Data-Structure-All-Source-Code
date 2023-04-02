update array element by value
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

    printf("which value want to update: ");
    scanf("%d",&value);
    int newValue;
    printf("enter new value to update: ");
    scanf("%d",&newValue);

    for(i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            index=i;
            break;
        }
    }
    if(index==-1){
              printf("value not found in this array: ");
    }else{
                  arr[index] = newValue;
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

