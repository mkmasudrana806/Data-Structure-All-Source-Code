//search an element from an array. and find position this element.
#include<stdio.h>
int main()
{
    int a[5]= {1,3,3,4,5};
    int i,num,found=0,pos=0;
    printf("which value want to search\n");
    scanf("%d",&num);
    for(i=0; i<5; i++)
    {
        if(a[i]==num)
        {
            found=a[i];
            pos=i;
            break;
        }
    }
    pos++;
    if(found)
        printf("found this value: %d and positon is %d\n",found,pos);
    else
        printf("cann't any value in this array\n");

}
