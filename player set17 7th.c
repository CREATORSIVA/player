#include <stdio.h>
int main()
{
    char s[100000];
    int i,c,q=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            c++;
        }
    }
    for(i=2;i<c;i++)
    {
       if(c%i==0)
       {
           q=1;
           printf("no");
           break;
       }
    }
    if(q==0)
    {
        printf("yes");
    }

    return 0;
}
