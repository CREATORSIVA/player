#include<stdio.h>

int main()

{

    int n,a[50],i;

    printf("Enter the no of elements:\n");

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)

    {

        if(a[i]!=0)

        {

            printf("%d",a[i]);

        }

        else

        {

            break;

        }

    }

    return 0;

}
