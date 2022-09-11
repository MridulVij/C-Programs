#include<stdio.h>
#include<conio.h>
int main(){
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<[ Operators in C ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// -----------------------------------jenny lecture operator part 1 date - 17/7/2022-----------------------------------------

//    UNARY OPERATOR
/*
    int a = 10, b = 10; // here (+- = -) _-> (+b-b = -b)
    printf("%d",a= -b);
*/
// output will be -10

/*
    int a = 10, b = -10; // here (-- = +) -> (-b-b = +b)
    printf("%d",a= -b);
*/

// output will be 10





//     INCREMENT/ DECREMENT OPERATOR
/*
    int y = 10, x = 11;
    printf("x = %d\n",y = x++); // postfix x++ (O/P) = 11
*/


/*
    int y = 10, x = 11;
    printf("x = %d",y = ++x); // prefix ++x (O/P) = 12
*/

/*
    int y = 10, x = 11;
    printf("y = %d",x = y++); // postfix y++ (O/P) = 10
*/

/*
    int y = 10, x = 11;
    printf("y = %d",x = ++y); // prefix ++y (O/P) = 11
*/




//     LOGICAL NOT OPERATOR
/*
    int a=10, b=11;
    printf("%d\n",!(a>b)); // a>b = 0(false) but with logical not ! it will 1(True) output opposite
    printf("%d",!(a<b)); // a<b = 1(true) but with logical not ! it will 0(False)
*/





//        ADDRESS OF & OPERATOR
/*
    int a;
    scanf("%d",&a); // the address & used to receive address or data from user or from memory
    printf("%d",a);
*/





//        SIZE OF OPERATOR
/*
    int a;
    printf("%d",sizeof(a)); // size of a variable of int data type in 4 bytes.

*/





//           TERNARY OPERATOR (?:)

/*      // using if else structure
    int a=10, b=11;
    if(a<b){
        printf("True (a<b)");
    }
    else{
        printf("False (a>b)");
    }
*/
/*     // using ternary operator structure
    int a =  10, b = 11,x;

    x=a<b?a:b;
    printf("%d",x); // a<b so output is 10

*/






//-----------------------------------jenny lecture operator part 2 date - 17/7/2022-----------------------------------------



//          ARITHMATIC OPERATORS (+,-,*,/)

/*
    int a=20, b=10, sum;
    printf("%d",sum = a + b);
*/

/*
    int a=10, b=20, sum;
    printf("%d",sum = a - b); // 10-20 = -10 because a = 10 and b = 20 and a is less than 20 and first operand will be a and it is less than b = 20
*/


/*
    int a=10, b=20, sum;
    printf("%d",sum = a * b);
*/

/*
    int a=10, b=20, sum;
    printf("%d",sum = a / b); // 10 / 20 = 2 - Quotient
*/

/*
    int a=10, b=20, sum;
    printf("%d",sum = a % b); // 10 % 20 = 10 - Remainder
*/

//          ASSIGNMENT (=) with ARITHMATIC OPERATORS

/*
    int a=10, b=20, sum;
    printf("%d",sum = a += b);
*/


/*
    int a=10, b=20, sum;
    printf("%d",sum = a -= b); //  a = 10 < b = 20 so thats why value will be in (-v)
*/


/*
    int a=10, b=20, sum;
    printf("%d",sum = a *= b);
*/


/*
    float a=20, b=10;
    float c = 10, d = 20, sum;
    printf("%f\n",sum = a /= b); // 10/20 = 2.0
    printf("%f",sum = c /= d); // 20/10 = 0.5

*/


/*
    int a=10, b=20, sum;
    printf("%d",sum = a %= b);
*/





//            RELATIONAL OPERATOR (<,<=,>,>=,==,!=)

/*
    int a=10, b=9, c=8, d=7, e=6;

    printf("%d\n",a>b); // greator than = true 1
    printf("%d\n",a>=b); // greator than equal to = true 1 but not equal to
    printf("%d\n",a<b); // less than = false 0
    printf("%d\n",a<=b); // less than equal to = false 0 but not equal to

    printf("%d\n",a==b); // equal to operator = false 0
    printf("%d\n",a!=b); // not equal to operator = true 1
*/




//          LOGICAL OPERATOR

/*
    int a=10, b=5;
    printf("%d",a<b || b==4); // output = 0 because (a) is not less than (b) so it false(0) AND (b) is not equal to 4 so it is false(0) 0&&1=0
*/


/*
    int a=10, b=5;
    printf("%d",a==b && b<a); //  output = 0
*/

/*
    int a=10, b=5;
    printf("%d",a>b  || b==5);
        // 10>5=true || b is equal to 5
*/

/*
    int a=10, b=5;
    printf("%d\n",!(a>b));
    printf("%d",!a>b); // both output will be false(0)
*/


//          BITWISE OPERATORS (& = AND, ^ = XOR, ~ = NOT, | = OR, << = Left Shift, >> = Right Shift)


/*
    int a=10, b=5;
    printf("%d",a&b); //output = 0
*/

/*
    int a=10, b=5;
    printf("%d",a^b); //output = 15
*/

/*
    int a=10, b=5;
    printf("%d",a|b);  //output = 15
*/

/*
    int a=10, b=5;
    printf("%d",a<<b); //output = 320
*/

/*
    int a=10, b=5;
    printf("%d",a>>b); // output = 0
*/


/*    COMMA AS A OPERATOR
    int a=8, b;
    printf("value of b = %d",b= a++,++a);
*/











}


























































/*

+	addition or unary plus
-	subtraction or unary minus
*	multiplication
/	division
%	remainder after division (modulo division)
=	a = b	a = b
+=	a += b	a = a+b
-=	a -= b	a = a-b
*=	a *= b	a = a*b
/=	a /= b	a = a/b
%=	a %= b	a = a%b
==	Equal to	5 == 3 is evaluated to 0
>	Greater than	5 > 3 is evaluated to 1
<	Less than	5 < 3 is evaluated to 0
!=	Not equal to	5 != 3 is evaluated to 1
>=	Greater than or equal to	5 >= 3 is evaluated to 1
<=	Less than or equal to	5 <= 3 is evaluated to 0
&&	Logical AND. True only if all operands are true	If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
||	Logical OR. True only if either one operand is true	If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
!	Logical NOT. True only if the operand is 0	If c = 5 then, expression !(c==5) equals to 0.
&	Bitwise AND
|	Bitwise OR
^	Bitwise exclusive OR
~	Bitwise complement
<<	Shift left
>>	Shift right
+	Adds two operands.	A + B = 30
−	Subtracts second operand from the first.	A − B = -10
*	Multiplies both operands.	A * B = 200
/	Divides numerator by de-numerator.	B / A = 2
%	Modulus Operator and remainder of after an integer division.	B % A = 0
++	Increment operator increases the integer value by one.	A++ = 11
--	Decrement operator decreases the integer value by one.	A-- = 9
|	Binary OR Operator copies a bit if it exists in either operand.	(A | B) = 61, i.e., 0011 1101
^	Binary XOR Operator copies the bit if it is set in one operand but not both.	(A ^ B) = 49, i.e., 0011 0001
~	Binary One's Complement Operator is unary and has the effect of 'flipping' bits.	(~A ) = ~(60), i.e,. -0111101
<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.	A << 2 = 240 i.e., 1111 0000
>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	A >> 2 = 15 i.e., 0000 1111
&	Binary AND Operator copies a bit to the result if it exists in both operands.	(A & B) = 12, i.e., 0000 1100
+=	Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.	C += A is equivalent to C = C + A of A + B to C
-=	Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand.	C -= A is equivalent to C = C - A
*=	Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand.	C *= A is equivalent to C = C * A
/=	Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand.	C /= A is equivalent to C = C / A
%=	Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand.	C %= A is equivalent to C = C % A
<<=	Left shift AND assignment operator.	C <<= 2 is same as C = C << 2
>>=	Right shift AND assignment operator.	C >>= 2 is same as C = C >> 2
&=	Bitwise AND assignment operator.	C &= 2 is same as C = C & 2
^=	Bitwise exclusive OR and assignment operator.	C ^= 2 is same as C = C ^ 2
|=	Bitwise inclusive OR and assignment operator.	C |= 2 is same as C = C | 2
sizeof()	Returns the size of a variable.	sizeof(a), where a is integer, will return 4.
&	Returns the address of a variable.	&a; returns the actual address of the variable.
*	Pointer to a variable.	*a;
? :	Conditional Expression.	If Condition is true ? then value X : otherwise value Y







Category	Operator	Associativity
Postfix	() [] -> . ++ - -	Left to right
Unary	+ - ! ~ ++ - - (type)* & sizeof	Right to left
Multiplicative	* / %	Left to right
Additive	+ -	Left to right
Shift	<< >>	Left to right
Relational	< <= > >=	Left to right
Equality	== !=	Left to right
Bitwise AND	&	Left to right
Bitwise XOR	^	Left to right
Bitwise OR	|	Left to right
Logical AND	&&	Left to right
Logical OR	||	Left to right
Conditional	?:	Right to left
Assignment	= += -= *= /= %=>>= <<= &= ^= |=	Right to left

*/
