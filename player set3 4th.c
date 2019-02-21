#include <stdio.h>

#include<string.h>

int main() {

	char a[10];

	int count=0,i,n;

	scanf("%s",a);

	n=strlen(a);

	for(i=0;i<n;i++)

	{

	    if(a[i]>='0'&&a[i]<='9')

	    {

	        count=0;

	    }

	    else

	    {

	        count++;

	    }

	}

	if(count==0)

	{

	    printf("yes..numeric");

	}

	else

	{

	    printf("no..not a numeric");

	}

	return 0;

}
