#include<stdio.h>

int main()

{

    int num,a[100],s=0,i;

    scanf("%d",&num);

    for(i=0;i<num;i++)

    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<num;i++)

    {

        s=s+a[i];

    }

    printf("%d",s);

return 0;

}
