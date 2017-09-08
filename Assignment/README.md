###### Stephen Szymczak
##Simple Calculator Function

This calculator takes 2 operands that are integers and performs an operation on them based a selected operator.
These operators include: +,-,*,/,%.
The core of this function is a switch statement that checks which operator has been selected and then selects the proper case to perform the operation.

Example of function:
- You want to store the result of "5+2" into a variable sum using this function.
- The function is formatted as follows: math(operand_one,operand_2,'operator').
- To perform 5+2 and store it in a variable sum the notation would be:
	sum = math(5,2,'+');

###NOTE: This calculator function does not handle divide by zero.