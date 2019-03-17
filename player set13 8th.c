#include<stdio.h>
int main()
{
    int n;
    int i,a[50],mul=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        mul=mul*a[i];
    }
    if(mul%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
