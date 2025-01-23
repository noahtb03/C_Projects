/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */
//Author: Noah Bennett

#include <stdlib.h>
#include <stdio.h>
#include "lab3.h"

//creates an array of pointers to the ingredients the user selected to be on their pizza
char ***get_thispizza(char **ingredients_list, int num_tops_wanted) {

	//allocate memory
	char ***customer_pizza = (char***)calloc(num_tops_wanted, sizeof(char**));

	getchar();

	//prompt user and take in number of toppings wanted
	printf("Please enter the number next to each of the %d topping you want, one number to each line:\n", num_tops_wanted);

	//make array given user input for which toppings they want
	for(int i = 0; i < num_tops_wanted; i++) {
		int top_num;
		scanf("%d", &top_num);
		*(customer_pizza + i) = ingredients_list + top_num - 1;
		getchar();
	}


	return customer_pizza;
}
