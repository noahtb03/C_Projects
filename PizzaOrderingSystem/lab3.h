/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */
//Author: Noah Bennett

//Create array with the ingredients the customer ordered
char ***get_thispizza(char **ingredients_list, int num_tops_wanted);

//Create array with all of the ingredients available
char **get_ingredients(int num_tops);

//Get a singular ingredient and add it to the array
char *get_item();

//free dynamic memory
void free_dmem(char **ingredients, char ***customer_pizza, int num_ingredints, int num_customer_ingredients);

//Write customer info to a file if they want it to be written to a file
void writefile(char **ingredients, char ***user_pizza, char filename[50], int num_ingredients, int num_customer_ingredients);

//See if a customer wants to save their info to a file
void save_info(char **ingredients, char ***user_pizza, int num_ingredients, int num_customer_ingredients);

//Display ingredients available to customer
void display_ingredients(char **ingredients, int num_tops);

//Display the pizza the user ordered
void display_pizza(char ***user_pizza, int num_customer_ingredients);
