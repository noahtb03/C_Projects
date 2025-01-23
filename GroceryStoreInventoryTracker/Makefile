# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
# RESPECT TO THIS ASSIGNMENT.
#Noah Bennett

# comments in a Makefile start with sharp 
gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# target all means all targets currently defined in this file
all: lab4.zip lab4

# this target is the .zip file that must be submitted to Carmen
lab4.zip: Makefile lab4main.c read_input.c read_file.c read_date.c read_grocery_items.c check_duplicate.c wholesale_cost.c current_investment.c total_revenue.c total_profit.c total_sales.c average_profit.c print_items_instock.c print_items_ostock.c print_department_items.c add_new_item.c insert.c delete_item.c write_file.c print_options.c lab4.h lab4Readme
	zip lab4.zip Makefile lab4main.c read_input.c read_file.c read_date.c read_grocery_items.c check_duplicate.c wholesale_cost.c current_investment.c total_revenue.c total_profit.c total_sales.c average_profit.c print_items_instock.c print_items_ostock.c print_department_items.c add_new_item.c insert.c delete_item.c write_file.c print_options.c lab4.h lab4Readme

# this target is the binary converter executable that prompts for input from the keyboard
lab4: lab4main.o read_input.o read_file.o read_date.o read_grocery_items.o check_duplicate.o wholesale_cost.o current_investment.o total_revenue.o total_profit.o total_sales.o average_profit.o print_items_instock.o print_items_ostock.o print_department_items.o add_new_item.o insert.o delete_item.o write_file.o print_options.o
	gcc lab4main.o read_input.o read_file.o read_date.o read_grocery_items.o check_duplicate.o wholesale_cost.o current_investment.o total_revenue.o total_profit.o total_sales.o average_profit.o print_items_instock.o print_items_ostock.o print_department_items.o add_new_item.o insert.o delete_item.o write_file.o print_options.o -o lab4

# this target is the dependency for .o files
lab4main.o: lab4main.c lab4.h
	gcc $(gcc_opt)  -c lab4main.c -o lab4main.o

insert.o: insert.c lab4.h
	gcc $(gcc_opt)  -c insert.c -o insert.o

read_input.o: read_input.c lab4.h
	gcc $(gcc_opt)  -c read_input.c -o read_input.o

read_file.o: read_file.c lab4.h
	gcc $(gcc_opt)  -c read_file.c -o read_file.o

read_date.o: read_date.c lab4.h
	gcc $(gcc_opt)  -c read_date.c -o read_date.o

read_grocery_items.o: read_grocery_items.c lab4.h
	gcc $(gcc_opt)  -c read_grocery_items.c -o read_grocery_items.o

check_duplicate.o: check_duplicate.c lab4.h
	gcc $(gcc_opt)  -c check_duplicate.c -o check_duplicate.o

wholesale_cost.o: wholesale_cost.c lab4.h
	gcc $(gcc_opt)  -c wholesale_cost.c -o wholesale_cost.o

current_investment.o: current_investment.c lab4.h
	gcc $(gcc_opt)  -c current_investment.c -o current_investment.o

total_revenue.o: total_revenue.c lab4.h
	gcc $(gcc_opt)  -c total_revenue.c -o total_revenue.o

total_profit.o: total_profit.c lab4.h
	gcc $(gcc_opt)  -c total_profit.c -o total_profit.o

total_sales.o: total_sales.c lab4.h
	gcc $(gcc_opt)  -c total_sales.c -o total_sales.o

average_profit.o: average_profit.c lab4.h
	gcc $(gcc_opt)  -c average_profit.c -o average_profit.o

print_items_instock.o: print_items_instock.c lab4.h
	gcc $(gcc_opt)  -c print_items_instock.c -o print_items_instock.o

print_items_ostock.o: print_items_ostock.c lab4.h
	gcc $(gcc_opt)  -c print_items_ostock.c -o print_items_ostock.o

print_department_items.o: print_department_items.c lab4.h
	gcc $(gcc_opt)  -c print_department_items.c -o print_department_items.o

add_new_item.o: add_new_item.c lab4.h
	gcc $(gcc_opt)  -c add_new_item.c -o add_new_item.o

delete_item.o: delete_item.c lab4.h
	gcc $(gcc_opt)  -c delete_item.c -o delete_item.o

write_file.o: write_file.c lab4.h
	gcc $(gcc_opt)  -c write_file.c -o write_file.o

print_options.o: print_options.c lab4.h
	gcc $(gcc_opt)  -c print_options.c -o print_options.o

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab4 lab4.zip
 

test:
	./lab4 

