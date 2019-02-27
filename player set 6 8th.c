#include <stdio.h>

#include<string.h>

int main()

{

    char a[1000],b[100];

    int i,count=0,samp=0,k,len,j;

    scanf("%[^\n]s",a);

    scanf("%s",b);

    len=strlen(b);

    for(i=0;a[i]!=NULL;i++)

    {

        if(a[i]==' ')

        {

            k=i+1;

            samp=0;

            for(j=0;j<len;j++)

            {

                if(a[k]==b[j])

                {

                   samp++; 

                }

                k++;

            }

            if(samp==len)

            {

            count++;

            }

        }

    }

    samp=0;

    for(i=0;i<=len;i++)

    {

        if(a[i]==b[i])

        {

            samp++;

        }

    }

    if(samp==len && a[len]==' ')

    {

        count++;

    }

    printf("%d",count);

return 0;

}
