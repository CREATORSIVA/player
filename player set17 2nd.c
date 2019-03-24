/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<string.h>
int main()
{
    char a[100][1000],b[1000];
    int i,j,num,s,c=0,k=0;
    scanf("%d%d",&num,&k);
    for(i=0;i<num;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<num;i++)
    {
        strcpy(b,a[i]);
        s=0;
        for(j=0;b[j]!=NULL;j++)
        {
            if((b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u') || (b[j]=='A'||b[j]=='E'||b[j]=='I'||b[j]=='O'||b[j]=='U'))
            {
                s=1;
            }
        }
        if(s==1)
        {
            c++;
        }
    }
    if(c==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
