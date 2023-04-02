//find max and min value from an array and find difference their.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int arr[50];
    printf("Enter input size of the array: ");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int max=arr[0];
    int min=arr[0];

    // here checking max and min value and store it max and min variable.
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum value is : %d\nminmum value is: %d\n",max,min);
    printf("Difference between Max and Min: %d",max-min);

    getch();
    return 0;
}


