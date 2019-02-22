#include <stdio.h>



int main(void) 

{

	char a[20][20],temp[50];

	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",a[i]);
	}
	
for(int i=0;i<n;i++)

   {

       for(int j=i+1;j<n;j++)

       {

           if(strcmp(a[i],a[j])>0)

           {

               strcpy(temp,a[i]);

               strcpy(a[i],a[j]);

               strcpy(a[j],temp);

             
	        }
	    }
	}
	for(i=0;i<n;i++)
	{
	    printf("%s ",a[i]);
	}
	return 0;

}
