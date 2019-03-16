#include <stdio.h>
int main(void) 
{
	int a[10],num,sum=0,i,j;
	scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<num,j<num;i++,j++)
    {
        sum=sum+a[i]+a[j];
    }
    printf("%d",sum);
	return 0;
}
