/**
 * @file test_ATM.c
 * @author Andra Monish (andramonish@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "unity.h"
#include "ATM.h" 
#include <stdio.h> 

void setUp()
{
}

void tearDown()
{
}

void test_moneyDeposit(void)
{
    int balance=15000; 
    int deposit= 5000;
    TEST_ASSERT_EQUAL_INT(20000, moneyDeposit(balance)); 
}
void test_checkbalance(void)
{
    int balance=15000; 
    TEST_ASSERT_EQUAL_INT(15000, checkBalance(balance)); 
}
void test_moneyWithdraw(void)
{
    int balance=15000; 
    int withdraw= 5000;
    TEST_ASSERT_EQUAL_INT(10000, moneyWithdraw(balance)); 
}

int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    RUN_TEST(test_moneyDeposit);
    RUN_TEST(test_checkbalance);
    RUN_TEST(test_moneyWithdraw);

    return UNITY_END();
}

