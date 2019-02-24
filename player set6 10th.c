#include <stdio.h>

int main()
{
    char a[50],b[40],ch;
    int i,c=0,j;
    scanf("%s %s",a,b);
    
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
        if(a[i]==b[j])
        {
            c=c+1;
            
        }
        }
    }
if(c>0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
