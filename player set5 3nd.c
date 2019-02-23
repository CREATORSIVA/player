
#include<stdio.h>
int main()
{
    int i,j,c=0,l==0;
    char a[50],b[50];
    scanf("%[^\n]",a);
    scanf("%[^\n]",b);l=strlen(b);
    for(i=0;ia[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    if(c==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
