#include<stdio.h>
int main()
{
    int a[5]= {5,2,1,3,9};
    int i,item;
    printf("enter item to search\n");
    scanf("%d",&item);
    for(i=0; i<5; i++)
    {
        if(a[i]==item)
        {
            printf("found and location is: %d\n",i);
            break;//when found then we break it, otherwise loop continue again until array end of the element.
        }
    }
//here when item not found in the array then i value becomes i=6.
//so when we cann't found any value then we check a condtition that
//if i>5;
if(i>5)//i can use found ==0.first set this variable in the if conditon inside the loop.at first initialze found==0.
    printf(" cann't found\n");
}
