#include <stdio.h>

int main()
{
    char str[100000];
    int i,c=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c=str[i]-48;
            while(c)
            {
                printf("%c",str[i-1]);
                c--;
            }
        }
    }

    return 0;
}
