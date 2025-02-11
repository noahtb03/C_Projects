//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lab4.h"

//Read in date and calculate the amount of days since the file was created
int read_date(FILE *inputfile, int current_month, int current_day, int current_year) {
	//create variables
	int logged_day, logged_month, logged_year, day_count, day_difference;
	int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//take in date of file creation
	fscanf(inputfile, "%d%d", &day_count, &logged_year);

	//if the current date is a leap year, add one to the current day
	if(current_year % 4 == 0 && current_month > 2) {
		current_day ++;
	}

	//calculate the days past this year based on the current date
	for(int i = 0; i < current_month - 1; i++) {
		current_day += monthdays[i]; 
	}

	//get the difference in days
	day_difference = current_day - day_count;

	//account for a difference in years
	while(current_year > logged_year) {
		if(logged_year % 4 == 0) {
			day_difference += 1;
		}

		day_difference += 365;
		logged_year ++;
	}

	return abs(day_difference);
}
