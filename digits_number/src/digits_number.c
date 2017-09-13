/*
 * digits_number.c
 *
 *  Created on:
 *      Author:
 */

#include "digits_number.h"

void srand_time(){
	srand(time(NULL));
}

int generate_number(){
	int number = ONE + rand()%MAX_NUMBER;
	assert(number>ZERO);
	return number;
}

void print_number(FILE* file, int number){
	assert(file!=NULL);
	fprintf(
			file,
			NEW_LINE PRINT_NUMBER,
			number
	);
}

int digits_number(int number){
	assert(number>ZERO);
	return (number<TEN)?ONE:ONE+digits_number(number/TEN);
}

void print_digits_number(FILE* file, int number){
	assert(file!=NULL);
	fprintf(
			file,
			NEW_LINE PRINT_DIGITS,
			digits_number(number)
	);
}

