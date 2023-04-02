#include<stdio.h>
void array_print(int [], int);
int main()
{
              int arr[50]={2,1,5,9,3};
              int i,num,pos,size=5;

              array_print(arr, size);

              printf("\nEnter element to insert: ");
              scanf("%d",&num);
              printf("Enter pos to insert: ");
              scanf("%d",&pos);


              if(pos<=0 || pos>size)
              {
                            printf("Invalid position to insert: ");
              }
              else{
              //this will take order of 1 or constant time,when the array is unsorted only.
              arr[size] = arr[pos-1];
              arr[pos-1] = num;
              size++;
              array_print(arr, size);
              }
}

//print the array
void array_print(int *a, int size)
{
              int i;
              for(i=0; i<size; i++)
              {
                            printf("%d ",*a++);
              }
}

