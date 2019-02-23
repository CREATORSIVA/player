#include <stdio.h>

int main()
{
    char a[50];
    int i,j,c=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {  c=0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
             c++;
             a[j]='$';
            }
        }
        if(c==0&&a[i]!='$')
        {
    
          
            printf("%c ",a[i]);
        }
        
        
    }
    

    return 0;
}
