/*
    Test environment for math.c and math.h
   
    Created on: 9/7/2017
    Last edited: 9/7/2017 4:15pm
    Author: Stephen Szymczak
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int result0,result1,result2,result3,result4,result5;//defining test variables
    char op;
    
    result0 = math(1,3,'+');//test operations for each possible operator
    result1 = math(4,1,'-');
    result2 = math(2,1,'*');
    result3 = math(5,5,'/');
    result4 = math(5,5,'%');
    //following line prints result0 through result4 after their assigned the math function
    printf("addition test: %d\nsubtraction test: %d\nmultiplication test: %d\ndivision test: %d\nmodulus test: %d\n",result0,result1,result2,result3,result4);
   
    printf("\nUser Input Test:\nEnter first number:");//following block is a input test for console
    int num1,num2;
    scanf("%d",&num1);//input for first integer
    printf("\nEnter second number:");
    scanf("%d",&num2);//input for second integer
    printf("\nEnter operator:");
    scanf(" %c",&op);//input for operator
    result5 = math(num1,num2,op);//math function is performed and assigned to result5
    printf("\nUser Input Result: ");//result5 is displayed in addition to the selected
    printf("%d %c %d = %d",num1,op,num2,result5);//operator and operands
    return 0;
}

