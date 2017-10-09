<h4><span style="color: #999999;">Stephen Szymczak</span></h4>
<h1><span style="color: #000000;">LAB 1: Calculator</span></h1>
<p>&nbsp;</p>
<p>&nbsp;This calculator takes 2 operands that are integers and performs an operation on them based a selected operator. These operators include: +,-,*,/,%. The core of this function is a switch statement that checks which operator has been selected and then selects the proper case to perform the operation.</p>
<h4>Dependencies:</h4>
<p>for using with the MSP430 processor, msp430.h must be included in the main file.</p>
<h4>Usage:</h4>
<p>Include math.h and math.c in your main project. The function can then be called and the formatting is as follows:</p>
<p>math(operand_one,operand_2,'operator');</p>
<p>Where operand_one and operand_2 are 16 bit signed integers &amp; operator is one of the following:&nbsp;+,-,*,/,%</p>
<h4>Known Errors:</h4>
<ul>
<li>Does not handle divide by zero</li>
<li>Does not handle improper inputs</li>
</ul>
