#include <stdio.h>

int main()
{
    char a[100000],b[100000];
   long int i,j=0,k,k1,s,t,r;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
        b[j]=a[i];
        j++;
        }
        else
        {
            s=i-1;
            r=i;
            for(k=0;k<j;k++)
            {
                for(k1=k+1;k1<j;k1++)
                {
                    if(b[k]>b[k1])
                    {
                        t=b[k];
                        b[k]=b[k1];
                        b[k1]=t;
                    }
                }
            }
            for(k=j-1;k>=0;k--)
            {
                a[s]=b[k];
                s--;
            }
            j=0;
        }
    }
    for(i=r+1;a[i]!=NULL;i++)
    {
        for(j=i+1;a[j]!=NULL;j++)
        {
             if(a[i]>a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
        }
    }
puts(a);
    return 0;
}
