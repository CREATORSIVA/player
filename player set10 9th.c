#include<stdio.h>
int main()
{
    long int num;
    long int oct=0,rem,p=1;
    printf("Enter the value");
    scanf("%ld",&num);
    while(num>0)
    {
        rem=num%10;
        oct=oct+rem*p;
        p=p*2;
        num=num/10;
    }
    printf("%lo",oct);
    
}
