#include <stdio.h>

int main()
{
    char a[100000];
    long int i,j,s;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        { s=0;
        for(j=i+1;a[j]!=NULL;j++)
        {
            if(a[j]>=97 && a[j]<=122)
        {
            if(a[i]==a[j])
            {
            s=1;
            a[j]=a[j]-32;
            }
        }
        }
        if(s==1)
        {
            a[i]=a[i]-32;
        }
        }
        }
    
puts(a);
    return 0;
}
