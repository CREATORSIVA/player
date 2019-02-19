
#include <stdio.h>

int main()

{ char a[20],b[20];
int len1=0,len2=0,i,j,c=0;
scanf("%d",&a);
scanf("%d",&b);
len1=strlen(a);
len2=strlen(b);
if((len1 && len1)<=100000)
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=b[i])
    {
        c++;
    }
}
if(c==1)
{
    printf("yes");
}
else
{
    printf("no");
}
    
    return 0;

    
}
