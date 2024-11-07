/*
Create a program that simulates the withdrawal operation in an ATM. 
The program should allow the user to enter a specific amount to withdraw 
and display how the amount is broken down into bills of 50, 20, and 10 units.

Rules:
Withdrawal Operation:

If the entered amount is less than or equal to 1000, the ATM will proceed with the withdrawal.
The program should calculate the maximum possible number of 50-unit bills, followed by 20-unit bills, 
and finally 10-unit bills and finally 100-unit bills to complete the requested amount. If the amount cannot be exactly broken down using
these denominations, the program should display an error message. Withdrawal Conditions:

The amount must be a multiple of 10 (since the smallest bill available is 10).
If the requested amount exceeds the available balance or is greater than 1000, the program should display 
an error message.
 */

#include <stdio.h>


int main() {
    int num;
    while (1)
    {
        printf("Insert number: ");
        scanf("%d",&num);
        
        if(num <=1000 && num%10 == 0){

            printf("the amount of $100,000 bills are: %d \n",num/100); num%=100;
            printf("the amount of $50,000 bills are: %d \n",num/50); num%=50;
            printf("the amount of $20,000 bills are: %d \n",num/20); num%=20;
            printf("the amount of $10,000 bills are: %d \n",num/10);


        }else{
            printf("Ingresa un numero de nuevo");

        }


    }
    return 0;
}