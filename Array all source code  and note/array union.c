//this programme for  array union and intersection
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n;
    int arr1[20], arr2[20], uni[50], uTemp[50];

    printf("Enter size for array 1: ");
    scanf("%d",&m);
    printf("Input element for 1st array: \n");
    for(i=0; i<m; i++)
        scanf("%d",&arr1[i]);

    printf("Enter size for array 2: ");
    scanf("%d",&n);
    printf("Input element for 2nd array: \n");
    for(i=0; i<n; i++)
        scanf("%d",&arr2[i]);
// here i assign both array in utemp array. means union temp array.
    for(i=0; i<m; i++)
        uTemp[i]=arr1[i];
    for(j=m, i=0; i<n; j++, i++)
        uTemp[j]=arr2[i];

    int  tempLen=m+n; // since temp has botha two array.
    int found, len=0;
    // here we check duplicates element in temp array. then unique element assign new array named uni, means union.
    for(i=0; i<tempLen; i++)
    {
        found=0;
        for(j=i+1; j<tempLen; j++)
        {
            if(uTemp[j]==uTemp[i])
                found=1;
        }
        if(found==0)
        {
            uni[len] = uTemp[i];
            len++;
        }
    }
    // here i am printing union array.
    printf("\nOUTPUT: \n");
    printf("UNION: ");
    for(i=0; i<len; i++)
        printf("%d ",uni[i]);

// here intersection code
    int inTemp[50], inter[50];
    tempLen=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr1[i]==arr2[j])
            {
                inTemp[tempLen] = arr1[i];
                tempLen++;
            }
        }
    }
    // here temp array check duplicate found or not then unique value store intersection array named inter.
    len=0;
    for(i=0; i<tempLen; i++)
    {
        found=0;
        for(j=i+1; j<tempLen; j++)
        {
            if(inTemp[i]==inTemp[j])
            {
                found=1;
            }
        }
        if(found==0)
        {
            inter[len] = inTemp[i];
            len++;
        }
    }
    // here i have pritint intersection array named inter.
    printf("\nIntersection: ");
    for(i=0; i<len; i++)
        printf("%d ",inter[i]);

    getch();
    return 0;
}
