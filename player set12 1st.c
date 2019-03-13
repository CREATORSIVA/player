#include<stdio.h>
void main(){
    long int a[100000],b[100000],num,k;
    long int t,i,j,c[100000],l=0;
    scanf("%ld %ld",&num,&k);
    for(i=0;i<num;i++)
    scanf("%ld",&a[i]);
     for(i=0;i<k;i++)
  scanf("%ld",&b[i]);

    for(i=0;i<num;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                b[j]='\0';
                l++;
                break;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
        printf("%ld ",c[i]);
    }
}
