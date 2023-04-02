#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a=14,b=2,arr[5]= {5,10,2,3,0};
    int res = findMAX(arr,5);
    printf("max i s; %d\n",res);
}

int findMAX(int arr[],int n)
{
    int res = arr[0];
    int i;
    for(i=1; i<n; i++)
    {
        res = fmax(res,arr[i]);
    }
    return res;
}

