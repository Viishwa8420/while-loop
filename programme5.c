//A Program to print leap years between two given numbers using a while loop.
#include<stdio.h>
main()
{
	int starting_year, ending_year;
	
	printf("Enter starting year : ");
	scanf("%d",&starting_year);//i must be less than n.
	
	printf("Enter ending year : ");
	scanf("%d",&ending_year);
	
	while(starting_year <= ending_year)
	{
		if(starting_year %4 == 0)
		{
			printf("%d \n",starting_year);
		}
		starting_year++;
	}
	
}
