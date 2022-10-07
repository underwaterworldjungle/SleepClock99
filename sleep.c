/* SleepClock99 by Jeremy Bird (github.com/underwaterworldjungle) 2022 */

#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	printf("\nHow long will you sleep? Enter a duration in hours, minutes and seconds.\n");
	
	unsigned int hours;
	unsigned int mins;
	unsigned int secs;
	
	printf("\nHours (0-99):\t");
	scanf("%i",&hours);
	if(hours>99){hours=99;}
	printf("\nMinutes (0-59):\t");
	scanf("%i",&mins);
	if(mins>59){mins=59;}
	printf("\nSeconds (0-59):\t");
	scanf("%i",&secs);
	if(secs>59){secs=59;}
	
	system("cls");
	printf("\nHours:'%i' \tMinutes:'%i' \tSeconds:'%i' ",hours,mins,secs);
	
	printf("\n\nSleeping...\n\n");
	
	do
	{
		printf("\rHours:'%i' \tMinutes:'%i' \tSeconds:'%i' \t sleep remaining.",hours,mins,secs);
		sleep(1);
		
		if((secs==0 && mins!=0))
		{mins=mins-1;secs=59;}
		//else if(!(secs=0 && mins!=0))
		//{secs=secs-1;}
		else if(!(secs==0))
		{secs=secs-1;}
		
		if((mins==0 && hours!=0))
		{hours=hours-1;mins=59;}
	}
	while(!(secs==0 && mins==0 && hours==0));
	
	system("cls");
	printf("\a\nYou awaken.");
	printf("\n\nPress any key to quit.");
	getch();
	
	return 0;
}