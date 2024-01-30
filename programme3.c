	//a Program to print i to N using a while loop.
#include<stdio.h>
main()
{
	int i, n;

	printf("Enter value for i : ");
	scanf("%d",&i);//i must be less than n.
	
	printf("Enter value for n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d \n",i);
		
		i++;
	}
	
}
