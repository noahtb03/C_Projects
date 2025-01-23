# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
# RESPECT TO THIS ASSIGNMENT.
#Noah Bennett

# comments in a Makefile start with sharp 
gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# target all means all targets currently defined in this file
all: lab3.zip lab3

# this target is the .zip file that must be submitted to Carmen
lab3.zip: Makefile lab3main.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c display_pizza.c writefile.c display_ingredients.c lab3.h lab3Readme
	zip lab3.zip Makefile lab3main.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c display_pizza.c writefile.c display_ingredients.c lab3.h lab3Readme

# this target is the binary converter executable that prompts for input from the keyboard
lab3: lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o display_pizza.o writefile.o display_ingredients.o
	gcc lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o display_pizza.o writefile.o display_ingredients.o -o lab3

# this target is the dependency for .o files
lab3main.o: lab3main.c lab3.h
	gcc $(gcc_opt)  -c lab3main.c -o lab3main.o

get_ingredients.o: get_ingredients.c lab3.h
	gcc $(gcc_opt) -c get_ingredients.c -o get_ingredients.o

get_item.o: get_item.c lab3.h
	gcc $(gcc_opt) -c get_item.c -o get_item.o

get_thispizza.o: get_thispizza.c lab3.h
	gcc $(gcc_opt) -c get_thispizza.c -o get_thispizza.o

save_info.o: save_info.c lab3.h
	gcc $(gcc_opt) -c save_info.c -o save_info.o

free_dmem.o: free_dmem.c lab3.h
	gcc $(gcc_opt) -c free_dmem.c -o free_dmem.o

display_pizza.o: display_pizza.c lab3.h
	gcc $(gcc_opt) -c display_pizza.c -o display_pizza.o

writefile.o: writefile.c lab3.h
	gcc $(gcc_opt) -c writefile.c -o writefile.o

display_ingredients.o: display_ingredients.c lab3.h
	gcc $(gcc_opt) -c display_ingredients.c -o display_ingredients.o

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab3 lab3.zip
 

test:
	./lab3

