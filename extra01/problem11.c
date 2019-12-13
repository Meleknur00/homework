#include<stdio.h>

int main()
{
	int inputSecond;
	int hours,minutes,seconds;
	int remainingSeconds;
	int secondsInHour = 60 * 60;
	int secondsInMinute = 60;
	printf("Enter the amount of seconds : ");
	scanf("%d",&inputSecond);
	hours = (inputSecond/secondsInHour);
	remainingSeconds = inputSecond % secondsInHour;
	minutes = remainingSeconds/secondsInMinute;
	seconds = remainingSeconds % secondsInMinute;
	printf("%d hours, %d minutes and %d seconds\n",hours,minutes,seconds);
	if(hours>0)
	{
		printf("%d hours ", hours);
	}
		if(minutes>0)
	{
		printf("%d minutes ", minutes);
	}
		if(seconds>0)
	{
		printf("%d seconds ", seconds);
	}
	printf("\n");
}