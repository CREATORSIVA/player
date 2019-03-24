#include<stdio.h>

main()
{
char a[100],i,j,c;

scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c=0;
if(a[i]!='$')
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
c++;
a[j]='$';
}
}
printf("%c%d",a[i],c+1);
}
}

}
