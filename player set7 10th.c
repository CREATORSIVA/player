#include <stdio.h>
#include<string.h>
int main()
{
    char a[50],b[40]={'A','n','w','e','r'};
    int i,l=0,j=0,l1=0;
    scanf("%s",a);
    l=strlen(a);
    l1=l+6;
    a[l]=' ';
    for(i=1;i<6;i++)
    {
        a[l+i]=b[j];
        j++;
    }
    for(i=0;i<l1;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
