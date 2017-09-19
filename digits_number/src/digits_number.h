/*
 * digits_number.h
 *
 *  Created on:
 *      Author:
 */

#ifndef DIGITS_NUMBER_H_
#define DIGITS_NUMBER_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZERO         0
#define ONE          1
#define TEN          10
#define MAX_NUMBER   999999
#define FILE_NAME    "digits_number.txt"
#define FILE_MODE    "w"
#define PRINT_NUMBER "\nNumero di cui contare le cifre: %d"
#define PRINT_DIGITS "\nNumero di cifre contate: %d"

/**
 * Assicura che ad ogni lancio il programma
 * generi numeri sempre diversi
 */
void srand_time();

/**
 * Genera in modo casuale il numero di cui contare le cifre
 * @post il numero generato deve essere maggiore di 0
 * @return
 */
int generate_number();

/**
 * Stampa su file il numero di cui contare le cifre
 * @pre il file deve essere aperto
 * @param file
 * @param number
 */
void print_number(FILE* file, int number);

/**
 * Calcola il numero di cifre che compongono il parametro
 * @pre il parametro deve essere un numero intero maggiore di 0
 * @param number
 * @return
 */
int digits_number(int number);

/**
 * Stampa su file il numero di cifre contate
 * @pre il file deve essere aperto
 * @param file
 * @param number
 */
void print_digits_number(FILE* file, int number);

#endif /* DIGITS_NUMBER_H_ */
