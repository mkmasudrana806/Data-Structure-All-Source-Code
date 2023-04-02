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
              printf("Enter pos to insert: ");
              scanf("%d",&pos);

              //this will take order of n time or O(N) or O(n-pos),since shift all value,when array is sorted.
              if(pos<=0 || pos>size)
              {
                            printf("Invalid position to insert: ");
              }
              else{
                  for(i=size-1; i>=pos-1; i--)
              {
                            arr[i+1] = arr[i];
              }
              arr[pos-1] = num;
              size++;
              array_print(arr, size);
              }


}
void array_print(int *a, int size)
{
              int i;
              for(i=0; i<size; i++)
              {
                            printf("%d ",*a++);
              }
}
