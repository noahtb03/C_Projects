/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */
//Author: Noah Bennett

#include <stdio.h>
#include "lab3.h"

//Save a users info and write it to a file if wanted
void save_info(char **user_ingredients, char ***user_pizza, int num_ingredients, int num_customer_ingredients) {

	//prompt user for a choice and save it to choice
	int choice = 2;
	printf("Would you like to save your information to a file? 1 = yes, 2 = no. Choose, then press enter.\n");
	scanf("%d", &choice);

	//if the user wants to, write their info to a file
	if(choice == 1) {
		printf("Enter a file name under 50 characters and press enter:\n");
		char filename[50];
		scanf("%s", filename);
		writefile(user_ingredients, user_pizza, filename, num_ingredients, num_customer_ingredients);
	}

}
