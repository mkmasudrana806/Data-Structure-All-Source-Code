// this algorithm willo take order of O(n) times, because we need to shift each element
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

              printf("\nEnter pos to delete: ");
              scanf("%d",&pos);

              //this will take order of n time or O(N) or O(n-pos),since shift all value
              if(pos<=0 || pos>size)
              {
                            printf("Invalid position to insert: ");
              }
              else if(pos==size)
              {
                            size--;
              }
              else{
                  for(i=pos-1; i<size-1; i++)
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
