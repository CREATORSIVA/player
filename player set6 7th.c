#include <stdio.h>

int main()
{
    char a[50],ch;
    int i,c=0;
    scanf("%s %c",a,&ch);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            c=c+1;
            
        }
    }
printf("%d",c);
    return 0;
}
