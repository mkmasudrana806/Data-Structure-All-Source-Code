//reverse an array and find difference between them and store it another array.
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,j,n;
    int diff[n], reverse[n], arr[20];
    printf("Input size of the array: ");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("\nOriginal Array: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);

    printf("\nReversed Array: ");
    for(j=n-1,i=0; j>=0; j--,i++)
    {
             reverse[i]=arr[j];
    }
    for(i=0; i<n; i++)
        printf("%d ",reverse[i]);

        printf("\nDifference: ");
    for(i=0; i<n; i++)
    {
        int result=0;
        result = arr[i]-reverse[i];
        if(result<0)
            result = abs(result);
        diff[i]=result;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",diff[i]);
    }

    getch();
    return 0;
}

