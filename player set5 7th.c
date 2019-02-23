#include <stdio.h>



int main(void) 

{

	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
    if(a>=0 && a<=180&&b>=0 && b<=180 && c>=0 && c<=180)
    {
	if(a>180 || b>180 || c>180 )

	{

		printf("no");

	}

	else

	{

		if(a+b+c==180)

		{

			printf("yes");

		}

		else

		{

			printf("no");

		}

	}
}
	return 0;

}
