// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

// Created by Mehmet Akif Duran. 3 Jan 2024.

/*
 Example output:
    This program calculates this formula.
        1!/1 + 2!/2 + 3!/3 + ... + n!/n
 Please enter the number that you want to calculate.
 5
 The sum of the series is = 34.
 */

#include <stdio.h>
#include <stdlib.h>

// Defining a function to calculate the factorial value.

int factorial(int number){
    
    //Variable declerations for the function.
    
    int count;
    int fact = 1;
    
    //Executable statements.
    
    for(count=1;count<=number;count++){
        fact = fact*count;
    }
        
    return fact;
}


int main(void){ // Beginning of the main
    
    //Variable Declerations.
    
    int i;
    int input;
    int sum=0;
    
    //Executable Statements.
    printf("Please enter the number that you want to calculate: \n");
    scanf("%d",&input);
    
    
    for(i=1;i<=input;i++){
        sum = sum+ factorial(i)/i;
    }
    
    printf("The sum of this series is = %d\n", sum);
    
    return 0;
} // End of the main
