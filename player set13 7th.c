#include <stdio.h>
#include<string.h>
int main()
{
    char s[100000],b[10000];
    int i,j=0,c=0,l,x,r;
    scanf("%[^\n]s",s);
    scanf("%s",b);
    l=strlen(b);
for(i=0;s[i]!=NULL;i++)
{
    if(s[i]!=' ')
    {
        if(s[i]==b[j])
        {
            c++;
            x=i;
            j++;
        }
    }
    else
    {
        if(c==l)
        {
            for(r=x;r>=x-l;r--)
            {
                s[r]='*';
            }
        }
        else
        {
            c=0;
            j=0;
        }
    }
}
if(c==l)
        {
            for(r=x;r>=x-l;r--)
            {
                s[r]='*';
            }
        }
for(i=0;s[i]!=NULL;i++)
{
    if(s[i]!='*')
    {
        printf("%c",s[i]);
    }
}
    return 0;
}
