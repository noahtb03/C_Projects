struct Cost { 
float wholesalePrice; 
float retailPrice; 
int wholesaleQuantity; 
int retailQuantity; 
}; 
struct Data { 
char item[50]; 
char department[30]; 
 int stockNumber; 
 struct Cost pricing; 
}; 
typedef struct Node { 
struct Data grocery_item; 
struct Node *next; 
} Node; 

//Read initial user input
int read_input(Node** grocery_items, char* date_str, char* ifile);

//Reads the date and grocery list
int read_file(Node **grocery_items, char *ifile, int month, int day, int year);

//Read the date from the input file and calculates the day difference
int read_date(FILE *ifile, int current_month, int current_day, int current_year);

//Read all grocery items from user input file
void read_grocery_items(Node **grocery_items, FILE *ifile);

//Insert node into linked list
void insert(Node **grocery_items, Node *new_node);

//Check that the added node doesnt have a duplicate stock number
_Bool check_duplicate(Node **grocery_items, Node *new_node);

//Print out all of the program options
void print_options();

//Calculate the total revenue
void total_revenue(Node **grocery_item);

//Calculate the total wholesale cost
void wholesale_cost(Node **grocery_item);

//Calculate the current investment
void current_investment(Node **grocery_item);

//Calculate the total 
void total_profit(Node **grocery_item);

//Calculate the total sales
void total_sales(Node **grocery_item);

//Calculate and print out the average profit per sold item
void average_profit(Node **grocery_item);

//Print all items currently in stock
void print_items_instock(Node **grocery_item);

//Print all items currently out of stock
void print_items_ostock(Node **grocery_item);

//Print all items in a certain department
void print_department_items(Node **grocery_item);

//Add a new grocery item to the linked list
void add_new_item(Node **grocery_item);

//Delete a grocery item from the linked list
void delete_item(Node **grocery_item);

//Write file with table of all grocery items
void write_file(Node **grocery_item, char *ofile);

