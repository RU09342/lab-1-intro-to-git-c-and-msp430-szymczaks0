/*
    math.c
    Basic calculator function that performs +,-,*,/, and %.
    Author: Stephen Szymczak
    Created: 9/6/2017
    Last Edited: 9/7/2017 4:15pm
    
    note: divide by zero not handled in this code
*/
#include <math.h>
int math(int num1, int num2, char op){  //Valid inputs are two integers as operands and characters: +,-,*,/, or % as operators
    int result; //result of operation will be stored and returned via this variable.

    switch(op)  //this case statement checks which operator was chosen and performs
    {           //the proper operation on the input integers num1 & num2.
        case '+':
            result = num1+num2;//addition
            break;
        case '-':
            result = num1-num2;//subtraction
            break;
        case '*':
            result = num1*num2;//multiplication
            break;
        case '/':
            result = num1/num2;//division
            break;
        case '%':
            result = num1%num2;//modulus
            break;
        default:
        printf("invalid operator for: ");// if the operator character is not +,-,*,/, or %, this will be printed
        break;
    }
    return result;
}