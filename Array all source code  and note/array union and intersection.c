#include<stdio.h>
int main()
{
    int a[10],b[10],u[20],len=0,found,i,j,m,n;
    printf("how many element want to add for array 1? ");
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);

    printf("how many element want to add for array 2? ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);
       // here check same value found or not then unique value assign array u.
    int l=0;
    for(i=0; i<m; i++)
    {
        found=0;
        for(j=i+1; j<m; j++)
        {
            if(a[i]==a[j])
            {
                u[l]=a[i];
            l++;
            len++;
            }
        }
    }
// here check between array u and b that same value found or not then unlike value assign array u.
    int k=0;
    for(i=0; i<n; i++)
    {
        found=0;
        for(j=0; j<l; j++)
        {
            if(u[j]==b[i])
            {
                 len++;
            u[l+k] = b[i];
            k++;
            }

        }

    }
    for(i=0; i<len; i++)
        printf("%d ",u[i]);
}

