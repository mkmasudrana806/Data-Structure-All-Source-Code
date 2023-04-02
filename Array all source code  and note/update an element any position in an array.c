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

              printf("Enter element to update: ");
              scanf("%d",&num);
              printf("Enter pos to update: ");
              scanf("%d",&pos);

              //this will take order of constant time of O(1)
              if(pos<=0 || pos>size)
              {
                            printf("Invalid position to update: ");
              }else{

              arr[pos-1] = num;
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

