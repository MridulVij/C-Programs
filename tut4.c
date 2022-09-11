#include<stdio.h>
#include<conio.h>
// decision control statement

/* <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<[if] syntax>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

if (condition)
{
    // only true statement will print
}
*/

// if program - false statement
/*
int main(){
    if(3>4){ // condition will be false 3 is not greater than 4 but not in real life so, statement will not print.
        printf("mridul");// statement
    }
}*/

// if program - true statement
/*
int main(){
    if(3<4){ // condition will be true 3 is less than 4 so statement will be print.
        printf("mridul"); //statement
    }
}*/


// practice program - write a program to check whether number is positive or not.

/*
int main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    if(a>0){
        printf("Number is positive");
    }
    if(a<=0){
        printf("Number is negative");
    }
}*/

// Program to use if statement
/*
int main()
{
 int age, num = 18;
  printf("Enter Your age: ");
  scanf("%d",&age);
 if(age>=18)
 {
  printf("Your age is %d\n Yes, You are eligible to Drive",age);
 }
 if(age<18)
 {
  printf("Your age is %d\n Sorry, You are not eligible to Drive",age);
 }

}
*/











// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<[if else] syntax>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*

if(condition){
    // execute block if condition is true
}
else{
    // execute block if condition is false
}


// if program - false condition

int main(){
    int a=5;
    if(a>10){ // 5 is not greater than 10 condition is false so else block will print
        printf("positive number");
    }
    else{ //
        printf("negative number");
    }
}*/

// if program - true condition

/*
int main(){
    int a=5;
    if(a<10){ // 5 is less than 10 condition is true so if block will print
        printf("positive number");
    }
    else{
        printf("negative number");
    }
}*/










//<<<<<<<<<<<<<<<<<<<<<<<<<<[if else if syntax]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
if(condition){
    statement;
}
else if(condition){
    statement;
}
else{
    statement;
}*/

/* program for if else if

int main(){
    int sav;
    printf("Enter the savings = ");
    scanf("%d",&sav);
    if(sav>=3000){ // savings is > 5000 then we purchase gold. Gold range start from 3000-infinity
        printf("Gold");
    }
    else if(sav>=2000){ // savings is > 2000 then we purchase silver. silver range start from 2000-2999
        printf("Silver");
    }
    else if(sav>=1000){ //savings is > 1000 then we purchase bronze. bronze range start from 1000-1999  extra else if added!
        printf("Bronze");
    }
    else{
        printf("Artificial Jewellary"); // savings is < 1999 then we purchase only artificial jewellary range start from 1-1999
    }
}*/










//<<<<<<<<<<<<<<<<<<<<<<<<<<<[ Nested if syntax ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*


// 1st Syntax //

if(condition)
{
    if(condition)
    {
        // statement
    }
    else
    {
        // statement
    }
}
else
{
    // statement
}


// 2nd Syntax //

if(condition)
{
    // statement
}
else
{
    if(condition)
    {
        // statement
    }
    else
    {
        // statement
    }
}

// apni kaksha vaala program
int main(){
    int savings;
    printf("Enter the savings = ");
    scanf("%d",&savings);
    if(savings>5000){
        if(savings>10000){
            printf("Buy Gold");
        } else{
            printf("Buy Silver");
        }

    }

}*/

// my sirji program of nested if else
// program to find higest number from 3 number by taking input from user

/*
int main()
{
    int a,b,c;
    printf("Enter three Numbers = ");
    scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
        {
            printf("%d",a);
        }
else
    {
        if(b>=a&&b>=c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }

    }

}*/

/*>>>>>>>>>>>>>>>>>>>>>>[ if else Ladder ]<<<<<<<<<<<<<<<<<<<<<<<<<<


if else ladder syntax -

if(condition)
{
    // statement
}
else
{
    if(condition)
    {
        // statement
    }
    else
    {
        if(condition)
        {
            // statement
        }
        else
        {
            // statement
        }
    }

}





