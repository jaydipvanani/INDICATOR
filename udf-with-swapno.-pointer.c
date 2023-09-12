#include<stdio.h>

swap (int *p,int *p1)
{
	int temp ;
	temp = *p;
	*p   = *p1;
	*p1  = temp;
	
	printf(" SWAPING VALUE OF A = %d\n",*p);
	printf(" SWAPING VALUE OF B = %d",*p1);
	
}






main()
{
	int a,b;
	printf("  ENTER A VALUE = ");
	scanf("%d",&a);
	printf("  ENTER B VALUE = ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
}
