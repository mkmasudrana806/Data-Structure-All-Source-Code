#include<stdio.h>
int main()
{
    int a[10],b[10],temp[20],u[20];
    int found,i,j,m,n;
    printf("how many element want to add for array 1? ");
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);

    printf("how many element want to add for array 2? ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);

        //here store temp array to all intersection e

        int tempLen=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {

                temp[tempLen] = a[i];
                tempLen++;
            }
        }
    }
    // here temp array check duplicate found or not then unique value store union array named u.
    int len=0;
    for(i=0; i<tempLen; i++)
    {
        found=0;
        for(j=i+1; j<tempLen; j++)
        {
            if(temp[i]==temp[j])
            {
                found=1;
            }
        }
        if(found==0)
        {
            u[len] = temp[j];
            len++;
        }

    }

    // here i have prit u array means union array.
    printf("intersection of A and B matrix is: ");
    for(i=0; i<len; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}

