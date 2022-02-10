/**
 * @file test_candy_operations.c
 * @author 255914 Souhardya Sengupta (senguptasouhardya@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "candy_operations.h"

//#include "candy_operations.c"
#define PROJECT_NAME "candy"

/* Prototypes for all the test functions */
void test_sort_array(void);
void test_merge_array(void);
void test_get_position(void);
void test_median_of_array(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sort_array);
  RUN_TEST(test_merge_array);
  RUN_TEST(test_get_position);
  RUN_TEST(test_median_of_array);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_sort_array(void) {
  /*TEST_ASSERT_EQUAL(NULL,sort_array(2 2,1 1,3,0 0));
  TEST_ASSERT_EQUAL(NULL,sort_array(2 2,1 1,2,0 0));
  TEST_ASSERT_EQUAL(NULL,sort_array(2 0,1 0,1,0 0));
  TEST_ASSERT_EQUAL(NULL,sort_array(1 1,1 1,2,0 0));
  TEST_ASSERT_EQUAL(NULL,sort_array(1 0,1 0,1,0 0));*/
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(15000, sort_array(7500, 7500));
}

void test_merge_array(void) {
/* TEST_ASSERT_EQUAL(NULL,merge_array(2 2,2 2,1 0,1 1,2 1,1 0,1,1,0 0));
 TEST_ASSERT_EQUAL(NULL,merge_array(1 1,1 0,1 0,1 1,1 0,1 0,1,1,0 0)); */
  //TEST_ASSERT_EQUAL(merge_array(2 2,1 2,1 1,1 1,1 2,2 1,2,1,0 0));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100, merge_array(1000, 900));
}

void test_get_position(void) {
  /*TEST_ASSERT_EQUAL(0, get_position(0 0,0,0));
  TEST_ASSERT_EQUAL(1, get_position(2 1,2,0));
  TEST_ASSERT_EQUAL(0, get_position(1 2,1,0));*/
  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(10, get_position(2, 5));
}

void test_median_of_array(void) {
 /* TEST_ASSERT_EQUAL(1, median_of_array(1 2,2));
  TEST_ASSERT_EQUAL(0, median_of_array(1 2,0));
  TEST_ASSERT_EQUAL(0, median_of_array(0 0,1));
  TEST_ASSERT_EQUAL(0, median_of_array(0 0,0));*/
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, median_of_array(2, 2));
}
