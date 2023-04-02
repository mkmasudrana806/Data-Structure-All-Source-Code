#include<stdio.h>
//void read_element(int [], int);
//void print_element(int [], int);
void read_element(int [], int, int);
void print_element(int [], int, int);
int main()
{

    int arr[10],size,i;
  printf("Enter array size: ");
 scanf("%d",&size);
    //read_element(arr, size);
    //print_element(arr, size);
    int start=0;
    read_element(arr, start,size);
    print_element(arr, start,size);
}
/*
void read_element(int arr[],int size)
{
   if(size-1<0)
              return;
   else{
              scanf("%d",&arr[size-1]);
              read_element(arr, size-1);
   }
}
void print_element(int arr[], int size)
{

   if(size-1<0)
              return;
   else
              printf("%d ",arr[size-1]);
   print_element(arr, size-1);
}
*/

// another way to recursively read and write element of an array
void read_element(int arr[],int start, int len)
{
   if(start>=len)
              return;
   else{
              scanf("%d",&arr[start]);
              read_element(arr, start+1, len);
   }
}


void print_element(int arr[], int start, int len)
{
   if(start>=len)
              return;
   else
              printf("%d ",arr[start]);
   print_element(arr, start+1,  len);
}
