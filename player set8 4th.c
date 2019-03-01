
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,i,mul=0;
    scanf("%d%d",&a,&b);
    if(((a>=1)||(a<=50))&&((b>=1)||(b<=50)))
    mul=pow(a,b);
    printf("%d",mul);
    else
    printf("invalid");
    return 0;
}
