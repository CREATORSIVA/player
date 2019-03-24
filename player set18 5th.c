/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
   long int i,j,c1=0,len,c2=0,l1;
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(a);
    l1=strlen(b);
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;b[j]!=NULL;j++)
        {
            if(a[i]==b[j])
            {
                c1++;
                break;
            }
        }
    }
     for(i=0;b[i]!=NULL;i++)
    {
        for(j=0;a[j]!=NULL;j++)
        {
            if(b[i]==a[j])
            {
                c2++;
                break;
            }
        }
    }
    if(c1==len && c2==l1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
