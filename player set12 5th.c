
#include <stdio.h>



main() 



{
	char s1[30],s2[30];
	scanf("%s %s",s1,s2);
	int l1,l2,i,len;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1<l2)
		len=l1;
	else
	len=l2;
	for(i=0;i<len;i++)
	printf("%c",s1[i]);

	for(i=0;i<len;i++)
	printf("%c",s2[i]);
}
