#include<stdio.h>
int main()
{
    long int num,sum=0,i,j,a[100000];
    scanf("%ld",&num);
    for(i=0;i<num;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<num-1;i++)
    {
        if(a[i]<a[i+1])
        {
            sum=sum+a[i+1];
        }
        else
        {
            sum=sum+a[i];
        }
    }
    printf("%ld",sum);
    return 0;
    
}
