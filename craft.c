#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	int countdown = 70; // which is in seconds

	/* 
	1hr	 -> 60 minutes -> 3600seconds
	1min -> 60 seconds
	isec -> 1 second
	
	*/  

	// Sort to each
	int hours = countdown / 3600;
	int minutes = (countdown % 3600) / 60;
	int seconds = (countdown % 3600) % 60 ;

	// print out
	printf("Duration: %02d:%02d:%02d\n", hours, minutes, seconds);
	printf("\n");

	while(countdown > 0){
		// Inside the loop so they get computed each time
		int hours = countdown / 3600;
		int minutes = (countdown % 3600) / 60;
		int seconds = (countdown % 3600) % 60 ;
		
		printf("\rTime left: %02d:%02d:%02d ", hours, minutes, seconds);
		fflush(stdout);
		countdown--;
		sleep(1); // Sleep for a second

		if(countdown == 0){
			printf("\rTime left: 00:00:00");
			break;
			
		}
	}

	printf("\n");
	printf("Time ended!\n");
	



	return 0;
}
