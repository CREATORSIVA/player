#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j=0,m;
    scanf("%[^\n]s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=' ')
        {
            s2[j]=s1[i];
            j++;
        }
        if(s1[i]==' ')
        {
            for(m=j-1;m>=0;m--)
            {
                printf("%c",s2[m]);
                s2[m]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
    return 0;
        
}
