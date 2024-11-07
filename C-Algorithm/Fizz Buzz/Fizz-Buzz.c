/*
 * Write a program that prints to the console (using print) the numbers
 * from 1 to 100 (both inclusive, with a line break between each output),
 * replacing the following:
 * - Multiples of 3 with the word "fizz".
 * - Multiples of 5 with the word "buzz".
 * - Multiples of both 3 and 5 with the word "fizzbuzz".
 */

#include <stdio.h>
int main()
{
    int i;
    for(i=1; i <= 100; i++){
    
        if ((i%3 == 0) && ( i%5 == 0) ){
         
            printf("Fizzbuzz ");

        }else if (i%3 == 0)
        {
            printf("Fizz");

        }else if (i%5 == 0)
        {
            printf("buzz ");

        }else{
            
            printf("%d", i);
            
        }
       printf("\n"); 
     
    }

            
    return 0;
}
