#include <stdio.h>

int main(void)

{

	int a1[100],a2[100],size1,size2,k,i,s=0,max=0,j;
    scanf("%d",&size1);
    scanf("%d",&size2);
    s=size1+size2;
    for(i=0;i<size1;i++)

	{
scanf("%d",&a1[i]);
	}

for(i=0;i<size2;i++)

	{

		scanf("%d",&a2[i]);

	}

	k=0;

	for(i=size1;i<s;i++)

	{

		a1[i]=a2[k];

		max=a1[0];

		for(j=0;j<=i;j++)

		{

			if(a1[j]>max)

			{

				max=a1[j];

			}

		}

		printf("\n%d",max);

		k++;

	}return 0;
}
