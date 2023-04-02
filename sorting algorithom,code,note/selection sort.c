//selection sort mane, soto digit ta ekdom first a anbe, first a loop a first digit check korbe next theke sob digit er sathe.
//ata check korbe j next kono amon digit ase kina j first digit er theke soto.jodi thake tahole sowap hobe.
#include<stdio.h>
int main()
{
    int a[5]= {5,2,1,3,9};
    int i,j,temp;

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<5; i++)
        printf("%d ",a[i]);
}
