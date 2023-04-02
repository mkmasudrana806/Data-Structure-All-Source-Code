#include<stdio.h>
void array_print(int [], int);
int main()
{
              int arr[50],size,i,num,pos;
              printf("Enter Array size: ");
              scanf("%d",&size);
              printf("Enter array element: ");
              for(i=0; i<size; i++)
              {
                            scanf("%d",&arr[i]);
              }
              array_print(arr, size);

              printf("Enter element to insert: ");
              scanf("%d",&num);

              //this will take order of O(1) or constant time
              arr[size] = num;
              size++;
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

