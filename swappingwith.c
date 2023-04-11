#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value A=");
	scanf("%d",&a);
	printf("enter value B=");
	scanf("%d",&b);

	
	c=a;
	a=b;
	b=c;
	printf("swapping value a=%d &b=%d",a,b);
}
