#include<stdio.h>

int main()

{

    long int n,a[1000],i,s=0,c=0,k,p;

    scanf("%ld",&n);

    for(i=0;i<n;i++)

    {

        scanf("%ld",&a[i]);

    }

    for(i=0;i<n;i++)

    {

        if(a[i]%2==0)

        {

            c++;

            k=i;

        }

        else

        {

            s++;

            p=i;

        }

        

    }

    if(c>s)

    {

       printf("%ld",a[p]); 

    }

    else

    {

    printf("%ld",a[k]);

    }

    return 0;

