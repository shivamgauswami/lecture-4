#include<stdio.h>

main()
{
	int a,b;
	printf("enter value A=");
	scanf("%d",&a);
	printf("enter value B=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swapping value a=%d & b=%d",a,b);
}
