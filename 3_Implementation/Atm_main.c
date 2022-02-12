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
