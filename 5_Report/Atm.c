/**
 * @file Atm.c
 * @author sidarayteli
 * @brief  Atm machine application for BalanceEnquiry, Deposit, WITHDRAW
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include "atm.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


//Main Code
int main() {
    //Local Declarations
    int option;
    float balance = 20000.00;
    int choice;

    bool again = true;

    // insert code here...

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = moneyDeposit(balance);
                break;
            case 3:
                balance = moneyWithdraw(balance);
                break;

            case 4:
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another Transaction:\n");
        printf(" 1  Yes\n");
        printf(" 2  No\n");
        scanf("%d", &choice);

        if (choice == 2) {
            again = false;
            menuExit();

        }
}

    return 0;
}//main code
*/



//Functions

void mainMenu() {

    printf("******************Hello Customer!*******************\n");
    printf("**********Welcome to ATM Banking Service***********\n\n");
    printf("****Please choose one of the options below****\n");
    printf("----------------------------------------------\n");
    printf(" 1   To Check Balance\n");
    printf(" 2   To Deposit\n");
    printf(" 3   To Withdraw\n");
    printf(" 4   To Exit\n\n");

}//Main Menu

void checkBalance(float balance) {
    printf("You Choose to See your BALANCE\n");
    printf("----------------------------------------------\n");
    printf("\n****Your Available BALANCE is:   $%.2f\n\n", balance);

}// to Check Balance

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a Money\n");
    printf("$$$$Your BALANCE is: $%.2f\n\n", balance);
    printf("****Enter your Amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\n****Your New BALANCE is:   $%.2f\n\n", balance);
    return balance;

}//to Money Deposit

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a Money\n");
    printf("$$$$Your BALANCE is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your Amount to Withdraw:\n");
    scanf("%f", &withdraw);


    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your Withdrawing Money is:  $%.2f\n", withdraw);
        printf("****Your New BALANCE is:   $%.2f\n\n", balance);

    }

        else  {

        printf("+++You do not have Enough Money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your BALANCE is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}//to money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");


}//exit menu

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}