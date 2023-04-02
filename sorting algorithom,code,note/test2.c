#include<stdio.h>
int main()
{
    int a[5] = {3,4,5,7,10};
    int b[3] = {5,9,13};
    int temp[5+3];
    int i=0,j=0,k=0;


    while(i<5 || j<3)
    {

        if(a[i]<a[j])
        {
            temp[k] = a[i];
            k++,i++;
        }
       else
       {
                     temp[k] = a[j];
                     k++,j++;
       }
    }
    for(i=0; i<5+3; i++)
        printf("%d ",temp[i]);

}
