//this is the linear search with character data.
//here we find a character is found or not in the given string.

#include<stdio.h>
#include<string.h>
//int  linearSearchWithCharacter(char *,int, char );
int  linearSearchWithCharacter(char *, char );
int main()
{
              //we also check with this character value.
//char str[]={'m','a','s','u','d'};
    char str[]="amar sonar bangla ami tomay valobashi\n";
    char ch;
    //int size = strlen(str);
    printf("enter character to search\n");
    scanf("%c",&ch);
    printf("this is string: %s\n",str);
    //int pos = linearSearchWithCharacter(str,size,ch);
    int pos = linearSearchWithCharacter(str,ch);
    if(pos==0)
        printf("%c character not found in this string\n",ch);
    else
        printf("%c occurs %d times in this string\n",ch,pos);

}

/*
int  linearSearchWithCharacter(char *str,int len, char value)
{
    //we store base address to the *str pointer.
    int count=0;
    for(int i=0; i<len; i++)
    {
//here check two character equal or not.
        if(*(str+i)==value)//here we increase base address and get next character then we check with value.
        {
            count++;//when condition is true then we increase variable.
            printf("in %d position found %c\n",i+1,value);//when condition true then we print this position.
        }
    }
//if occur=0,then in main function we show it is not found.when occur++. then it main functio show how many times
    return count;
}
*/

int  linearSearchWithCharacter(char *str, char value)
{

    int count=0;
    for(int i=0; *str!='\0'; i++)
    {
        if(*str==value)//check the value with character
        {
            count++;//when condition is true then we increase variable.
            printf("in %d position found %c\n",i+1,value);//when condition true then we print this position.
        }
        str++;//here increase the base address
    }
    return count;

}

