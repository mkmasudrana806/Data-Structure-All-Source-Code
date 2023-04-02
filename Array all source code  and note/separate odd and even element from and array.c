// find even and odd element from an array and store them different array and print these with odd and oven element count number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    int arr[100], oddArray[50], evenArray[50], oddCount = 0, evenCount = 0;
    printf("Input size of the array: ");
    scanf("%d", &n);
    printf("Input elements in array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // here checking element odd or even.
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArray[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            oddArray[oddCount] = arr[i];
            oddCount++;
        }
    }
    // below print separate even and odd element with number of even and odd element
    printf("\neven element in array: ");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArray[i]);
    }
    printf("\nodd element in array: ");
    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArray[i]);
    }
    printf("\nnumber of even element is : %d", evenCount);
    printf("\nnumber of odd element is : %d", oddCount);

    getch();
    return 0;
}
