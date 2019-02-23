#include<stdio.h>
int main()
{
    char a[60];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i=i+3)
    {
        printf("%c",a[i]);
    }
    return 0;
}
