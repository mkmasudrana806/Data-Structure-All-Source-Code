#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int gcd(int,int);
int main()
{
    int arr[5]= {2,4,6,8};
  int result = findGCD(arr,5);
  printf("resultant value is : %d\n",result);

}

int findGCD(int arr[],int n)
{
              int res = arr[0];
              for(int i=1; i<n; i++)
              {
                            res = gcd(res,arr[i]);
              }
              return res;
}




int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

