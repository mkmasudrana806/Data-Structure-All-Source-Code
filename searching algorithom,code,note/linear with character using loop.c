//this is the searching algorithm.this is character data searchin algorithm.
#include<stdio.h>
#include<string.h>
int main()
{
    char item,str[]="masud rana";
    int i;
    printf("enter character to search\n");
    scanf("%c",&item);
    int found=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==item)
        {//compare two character equal or not.
            found=i;//if condition is true then assign this index to the found variable.
        }
    }
    if(found==0)
        printf("not found\n");
    else
        printf("character found and positoin is : %d",found+1);
}

