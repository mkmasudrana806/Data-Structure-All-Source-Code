//if such that which array we want to sort,but that array is already sorted,in this case we need to opmized this algorithm.
//since array is sorted but loop continue n-1 times. in this case time complexity ordered or (n^2).
//but if we optimized it, then time complexity would reduced and ordered of O(n).
#include<stdio.h>
#define n 5
int main()
{
    int a[n]= {2,7,3,9,99};
    int i,j,temp,flag;
    //flag =0; instead of flag=0 initialize here. if we use it inside outer loop.then it would be more effiecient.
    for(i=0; i<n-1; i++)
    {
        flag=0;//it check every time,suppose duiber outer loop choler por dekho j next sob kisu sorted ase,tahole bread kore dibo joidi flag=0 hoi.
        //mane inner loop check kore jodi if condition true na hoi tokhon kebol flag=0 thakbe.mane next element gulo sorted ase ager thekei.
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
        printf("1\n");//loop chalie dekhbo ata koiber cholbe,but jokhon next sorted pabe tokhon r cholbe na.
// when flag remain zero(0). that means inner loop if condition full fill hoinai.
//tokhon e condition false hobe jodi array sorted thake.tai flag=1 hoinai.since after completing one execution
        if(flag==0)
        {
            //outer loop a flag dilam,karon firs er dike hoito sorted nao thakte pare, first er diker gulo sorted kore jokhon dekhbe next er gulo sorted ase tokhon loop break kore dibo,loop continue korar dorker nai.
            printf("array is  sorted\n");
            break;
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}

