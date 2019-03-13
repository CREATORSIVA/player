#include<stdio.h>
void  main()
{
    long int num,k;
    float t;
    scanf("%ld %ld",&num,&k);
    if(num>=1 && num<=1000)
    {
        t=num>>k;
    printf("%.2f",t);
    }
}
