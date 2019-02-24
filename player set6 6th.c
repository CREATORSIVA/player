#include <stdio.h>
#include<string.h>

int main()
{
    char a[50],ch;
    int i,c=0,l=0;
    scanf("%s %c",a,&ch);
    l=strlen(a);
    if(l<100000)
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            c=i+1;
            break;
        }
    }
printf("%d",c);
    return 0;
}
