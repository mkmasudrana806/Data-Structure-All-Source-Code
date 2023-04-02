//sort in string character wise.
#include<stdio.h>
#include<string.h>
//this is selection sort algorithm.
int binary_searchInString(char *,int,char );
int main()
{
    //we also check with this character value.
//char str[]={'m','a','s','u','d'};
    char str[50]="masud rana sheikh";
    int len = strlen(str);
    char temp;
    int i,j;
//here i am sorting the string using selection sort.
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(str[j]<=str[i])
            {
                temp = str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }

    }
//here print the sorted string.
    printf("sorted string is:%s",str);
    char ch;
    printf("\nenter chracter to search\n");
    scanf("%c",&ch);
//here i have called the function by str , len and ch argument.
    int pos = binary_searchInString(str,len,ch);
    if (pos==0)
        printf("there is no character found in this string\n");
    else
        printf("character found in this string and positon is: %d\n",pos+1);
    //here we add with pos value. because pos actually indicates string index.so we add 1 with it.
    //bacause string index starting with zero index.



}
//here userdefined function.*ptr pointer store the base address.
int binary_searchInString(char *ptr,int len,char item)
{
    int lb, ub, mid;
    lb=0;
    ub=len-1;
    int found=0;
    while(lb<=ub)
    {
        //here same binary search we continue.
        mid = (ub+lb)/2;
        if(item==*(ptr+mid))
        {
            return mid;
        }
        else if(item>*(ptr+mid))
        {
            //if item greater mid the lower bound increase to after mid. lb=mid+1;
            lb=mid+1;
        }
        else
        {
            //if item smaller than mid,then upper bound decrease to before mid. ub=mid-1;
            ub=mid-1;
        }
    }
    return found;
}
