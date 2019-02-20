#include <stdio.h>

int main()
{
   int x1,x2,x3,y1,y2,y3;
   scanf("%d %d",&x1,&y1);
   scanf("%d %d",&x2,&y2);
   scanf("%d %d",&x3,&y3);
   if(((x1==x2)&&(x2==x3)&&(x3==x1))||((y1==y2)&&(y2==y3)&&(y3==y1)))
   {
       printf("yes");
   }
   else 
   {
       printf("no");
   }
    return 0;
}
