#include <stdio.h>

/*
Exercise: Fibonacci Sequence

Write a program that prints the first n numbers of the Fibonacci sequence, where n is a number entered by the user.

The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two previous numbers. The Fibonacci sequence looks like this:

Copiar código
0, 1, 1, 2, 3, 5, 8, 13, 21, ...

Requirements

The program should prompt the user to enter a positive integer n, which represents the number of terms in the Fibonacci sequence to be printed.
If the user enters a number less than or equal to 0, the program should display an error message indicating that the number must be positive.
Once the user enters a valid number, the program should calculate and print the first n numbers in the Fibonacci sequence in a single line, separated by spaces.
Example Execution
If the user enters the number 7, the program output should be:

Enter the number of Fibonacci sequence terms to print: 7
Fibonacci sequence: 0 1 1 2 3 5 8
If the user enters 0 or a negative number:


Enter the number of Fibonacci sequence terms to print: -3
Error: the number of terms must be a positive integer.

*/

int main() {

    char exit = 'Y';    

    while (exit == 'Y'){

        int a=0,b=1,num,aux;
        
        printf("Enter a numner: ");
        scanf("%d",&num);

        if(num>0){

            for(int i = 0; i < num ; i++){

                printf(" %d  ",a);
                aux = a + b;
                a = b;
                b = aux;
            }

        }else{

            printf("Error: the number of terms must be a positive integer.");
        }

        printf("Continue [Y/N]: ");
        scanf(" %c",&exit);
    } 

    return 0;

}