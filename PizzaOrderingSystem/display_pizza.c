/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */ 
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>

//display the user's pizza
void display_pizza(char ***customer_pizza, int topping_count) {
	
	printf("The ingredients on this pizza are:\n");

	for(int i = 0; i < topping_count; i++) {
		printf("%d.%s \n", i + 1, **(customer_pizza + i));
	}
	
	printf("\n");
}
