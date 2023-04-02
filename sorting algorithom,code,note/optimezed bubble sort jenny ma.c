//if such that(jodi amon hoi j,jer uppor bubble sort apply korbo but se sorted e ase,ei khetre kintu loop thik e run iterate hobe,but it optimized korte hobe.
#include<stdio.h>
#define n 5
int main()
{
    int a[n]= {2,3,5,9,99};
    int i,j,temp,flag;
    flag =0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            //when i vlaue is 1,comparision hoi n-1-i. kenona outer loop continue n-1.
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;//when if condition is true then flag would be flag=1.
                //that means array sorted nai completely.tai if condition true hoise.
            }
        }
        printf("1\n");
// when flag remain zero(0). that means inner loop if condition full fill hoinai.
//tokhon e condition false hobe jodi array sorted thake.tai flag=1 hoinai.since after completing one execution
        if(flag==0)
        {
            printf("array is already sorted\n");
            break;
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}
