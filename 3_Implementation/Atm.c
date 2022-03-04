/**
 * @file Atm_main.c
 * @author sidarayteli
 * @brief  Atm machine application for BalanceEnquiry, Deposit, WITHDRAW
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "atm.h"

float moneyDeposit(float balance,float deposit) {
    balance += deposit;
    return balance;

}//to Money Deposit

float moneyWithdraw(float balance,float withdraw) {
   
 balance -= withdraw;     
    return balance;

}//to money withdraw