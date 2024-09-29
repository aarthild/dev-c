#include<stdio.h>
int main()
{
	printf("My name is Aarthi\n");
	printf("Iam from ECE department\n");
	printf("Iam studying 1st year engineering in ADITYA ENGINEERING COLEGE\n");
	printf("My native place is Rajahmundry\n");
	printf("My father name is Ramana");
	return 0;
}

declaration of variable
datatype variable name = value

datatypes:
	1.primitive data types
	2.derived data types
	3.user defined datatypes
	
	
	primtive datatypes:
		1.integer data type---10,20,500....(numbers) %d(format specifier)
		2.float data type---12.3,1.2,50.6....(decimals) %f 
		3.character data type ---l,k,j,h....(alphabets,A-Z,a-z) %c
		4.double datatype----%lf
		
		
		
		operators in c
		1.Arithmetic operators--
		   addition+
		   subraction-
		   multiplication*
		   division/
		   modulus%
		2.Relational operators:<,>,<=,==,!=
		3.logical operators---
	       A)	&&: logical and ; 
	      	a=10,b=20,c=30
		    (a>b) && (a<c)
		      0          1
		      true only when both are correct
		   B)   ||: logical or; true when any one is correct;
		     (a>b) || (a<c)
		      0          1
		   C)   ! : logical not;if input is true then output is false
	       	(a<b)
		     0
		4.assinment operators; =
		   +=,-=,*=,/=,
		   a+=b----a=(a+b),
		5.increment operators and decrement operators
		   increment:++,
		   ++a----a=a+1
		   a++----after printing value increased so use another print function 
		          then correct value of a is obtained.
		   decrement:--,
		   --a,a--
		   same as increment.
        6.Ternary operators
		   result=expression?value1:value 2
		   a=20,b=10
		   (a<b)?a:b----output is b if false
		                output is a if true.
		   		    
		7.bit wise operators
		    converts decimal to binary
		A)bitwise AND:&
		B)bitwise OR: |
		C)bitwise XOR:^(if AND,OR same then XOR is false).
		D)bitwise left shift: <<
		  how many bits move to left
		  1byte=8bits
		  a=10,b=2
		  a<<b
		  a=1010
		  in bytes: 00001010
		  according to a<<b 00101000
		  now output is 8+32=40.
		E)bitwise right shift: >>
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		 		
