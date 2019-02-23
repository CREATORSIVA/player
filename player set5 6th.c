#include <stdio.h>

#include<math.h>

#define pi 3.14

int main(void) {

	int n;

	float res;

	scanf("%d",&n);

	res=sin(n*pi/180);
	

	printf("%f",res);

	return 0;

}
