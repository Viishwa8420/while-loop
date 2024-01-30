//a Program to print odd numbers from N to i using a while loop.
#include<stdio.h>
main()
{
	int i, n;
	
	printf("Enter value for i : ");
	scanf("%d",&i);//i must be greater than n.
	
	printf("Enter value for n : ");
	scanf("%d",&n);
	
	while(i>=n)
	{
		if(i % 2 != 0)
		{
			printf("%d \t",i);
		}
		i--;
		
	}
	
}
