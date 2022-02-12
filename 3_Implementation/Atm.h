/**
 * @file Atm.h
  * @author sidarayteli
 * @brief  Atm machine application for BalanceEnquiry, Deposit, WITHDRAW
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//header gaurds
#ifndef ATM_H
#define ATM_H

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();
#endif

