#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);



/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int findMedian(int n, int arr[])
{
    int index;
    if(n%2==0)
    {
        index = (((n/2)+1)-1);
        printf("%d\n",arr[index]);
    }
    else
    {
        index = (arr[(n/2)-1] + arr[((n/2)+1)-1])/2;
        printf("%d\n",index);
    }
}

int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
        int j;
        for(i=1; i<n; i++)
        {
                      int temp = arr[i];
                      j=i-1;
                      while(j>=0 && temp<arr[j])
                      {
                                    arr[j+1]=arr[j];
                                    j--;
                      }
                      arr[j+1]=temp;
        }
    findMedian(n,arr);

}
