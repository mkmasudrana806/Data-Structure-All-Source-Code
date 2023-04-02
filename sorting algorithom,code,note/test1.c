#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 20
int main()
{
char ch;
char s[40];
char sen[100];
scanf("%c",&ch);
scanf("%s",&s);
scanf("%[^\n]",sen);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",sen);
    return 0;
}
