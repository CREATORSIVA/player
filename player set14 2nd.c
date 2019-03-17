#include<stdio.h>
int main()
{
    char a1[1000000];
    int i,j,c=0,num=0,s;
    scanf("%s",a1);
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]%2==0)
        {
            c++;
        }
        if(a1[i]%2!=0)
        {
            num++;
        }
    }
    if(num>0 && c>0)
    {
        s=num*c;
    }
    printf("%d",s);
    return 0;
}
