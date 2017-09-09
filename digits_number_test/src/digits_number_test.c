/*
 ============================================================================
 Name        : fibonacci_test.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "digits_number.h"

#define TEST 16

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_number(){

}

void test_digits_number(){
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE A",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of generate_number()",test_number);
	CU_pSuite pSuite_B = CU_add_suite("SUITE A",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of digits_number",test_digits_number);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
