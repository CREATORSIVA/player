#include <stdio.h>
int main(void) 
{
	char a[20];
   int i;
   scanf("%[^\n]s",a);
   for(i=0;a[i]!='\0';i++)
{
        if(a[i]==' '&& a[i+1]==' ')
        {
            a[i+1]='$';
        }
	}
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]!='$')
	    printf("%c",a[i]);
	}
	return 0;

}
