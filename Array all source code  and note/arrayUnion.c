#include<stdio.h>
int main()
{
    int a[10],b[10],u[20],len=0,flag,i,j,m,n;
    printf("how many element want to add for array 1? ");
    scanf("%d",&m);

    for(i=0; i<m; i++)
        scanf("%d",&a[i]);

    printf("how many element want to add for array 2? ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&b[i]);
    int k=0;
    for(i=0; i<m; i++)
    {
        flag =0;
        for(j=0; j<n; j++)
        {
            if((b[j]==a[i]) && a[i]==a[i+1])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            u[k+i]=a[i];
            k++;
            u[k]=b[j];


        }
    }
    for(i=0; i<k; i++)
        printf("%d ",u[i]);
}

