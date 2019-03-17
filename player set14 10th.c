#include <stdio.h>

int main()
{
    char s[10000];
    int i,j=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]!='a' && s[i]!='b')
        {
            j=1;
        }
    }
    if(j==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
