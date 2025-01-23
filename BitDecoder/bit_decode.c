/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED 
** TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY 
** WITH RESPECT TO THIS ASSIGNMENT. 
 */ 
//Author: Noah Bennett

#include <stdio.h>
#define MAX_LENGTH 200

//rotates the bits in a byte to the right one, wrapping the rightmost bit to the leftmost bit
int rotate_right(unsigned int number) {
	
	//if the rightmost bit is a one, add it to the first bit of the new byte
	if(number % 2 == 1) {
		number = number >> 1;
		number = number | 128;
	} else {
		number = number >> 1;
	}

	return number;
}

//rotates the bits in a byte to the left one, wrapping the leftmost bit to the rightmost bit
int rotate_left(unsigned int number) {

	//if the leftmost bit is a one, add it to the last bit of new byte
	if(number > 127) {
		number = number << 1;
		number = number ^ 256;
		number = number | 1;
	} else {
		number = number << 1;
	}

	return number;
}

//creates an 8 bit key based on a 4 bit user input
int create_key() {
	//initialize variables, make counter equal to 0x88 hex code
	int key = 0;
	char digit;
	int hex = 136;

	//for the next 4 user input digits create an 8 bit key using bitwise or and dividing the hex value by 2
	for(int i = 0; i < 4; i++) {
		digit = getchar();
		if(digit == '1'){
			key = key | hex;
		}
		hex = hex / 2;
	}

	return key;
}

//convert a hex character to an integer in decimal
int convertToInt(char letter) {
	int intConversion = 0;

	//depending on what the character is, change it to an integer value
	if (letter >= '0' && letter <= '9') {
        	intConversion = letter - '0';
   	} else if (letter >= 'A' && letter <= 'F') {
        	intConversion = letter - 'A' + 10;
    	} else if (letter >= 'a' && letter <= 'f') {
        	intConversion = letter - 'a' + 10;
    	}

	return intConversion;
}

//encrypt the byte of the given hex value
int encrypt(char letter1, char letter2, int key, int charCount) {
	//convert the original two hex character to a byte
	int letterByte = (convertToInt(letter1) << 4) | convertToInt(letter2);

	//if the input is an even number rotate it left, if it's odd rotate it right
	if(charCount % 2 == 0) {
		letterByte = rotate_left(letterByte);
	} else {
		letterByte = rotate_right(letterByte);
	}

	//XOR the hexbyte with the user input key
	key = key ^ letterByte;

	return key;
}

int main(){
#ifdef PROMPT
	printf("Enter a 4-bit key:\n");
#endif
	//get user key and convery it to a byte
	int key = create_key();
	getchar();

#ifdef PROMPT
	printf("Enter encoded text:\n");
#endif
	//create variables for the two hex characters, letter count, separator, and encrypted key
	char letter1, letter2, space;
	int letterCount = 1;
	int encryptedKey = 0;

	//until the max length or a new line is reached, read in hex characters, decrypt them and print the letters out
	while(letterCount < MAX_LENGTH && space != '\n') {
		scanf("%c%c%c", &letter1, &letter2, &space);
		encryptedKey = encrypt(letter1, letter2, key, letterCount);
		putchar((char)encryptedKey);
		letterCount += 1;
	}
		
	
	return 0;
}

