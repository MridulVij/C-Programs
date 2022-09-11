#include<stdio.h>
//                          FUNCTIONS IN  C


/*
void brazil();
void italy(); // function prototype declaration
void argentina();

void main()
{
    italy(); // function call
    brazil();
    argentina();
    printf("\nI am in  main");
}
void brazil()
{
    printf("\nI am in brazil");
}
void argentina()
{
    printf("\nI am in argentina");
}
void italy() // function defination
{
    printf("\nI am in italy");
}
*/


//                      BASIC FUNCTIONS PROGRAM

/*

void multiply(); // void keyword does not return any value.
void add();
void substract();           // function declaration

void main()
{
    add();  // it will execute (1st)
    multiply(); //  2nd
    substract(); // 3rd             // function call
}
void add() // 1st
{
    int a,b,sum;
    printf("Enter Two Number for Addition (+) : ");
    scanf("%d%d",&a,&b);
    printf("Answer : %d\n",sum=a+b);            // function defination
}
void multiply() // 2nd
{
    int a,b,sum;
    printf("Enter Two Number for Multiply (X/*) : ");
    scanf("%d%d",&a,&b);
    printf("Answer : %d\n",sum=a*b);
}
void substract() // 3rd
{
    int a,b,sum;
    printf("Enter Two Number for Substract (-) : ");
    scanf("%d%d",&a,&b);
    printf("Answer : %d\n",sum=a-b);
} // Note - We can use same variable name in different functions

*/



//          FUNCTION PROGRAM RUN 5 TIMES TO ADD 2 NUMBERS

/*
void add(); // void keyword does not return any value.

void main()
{
    add();  // it will execute (1st)
    add();  // it will execute (1st)
    add();  // it will execute (1st)
    add();  // it will execute (1st)
    add();  // it will execute (1st)
}
void add() // 1st
{
    int a,b,sum;
    printf("Enter Two Number for Addition (+) : ");
    scanf("%d%d",&a,&b);
    printf("Answer : %d\n",sum=a+b);
}

*/



//              FUNCTION PROGRAM RUN 5 USING (FOR LOOP) TO ADD 2 NUMBERS PROGRAM

/*
void add(); // void keyword does not return any value.

void main()
{
    for(int i=1; i<6; i++) { // when statement is less then we no need to put {} in every loop
        printf("Calling Function: [%d]\n",i);
        add();
    }
}
void add() // 1st
{
    int a,b,sum;
    printf("Enter Two Number for Addition (+)\n");
    printf("Operand 1: ");
    scanf("%d",&a);
    printf("Operand 2: ");
    scanf("%d",&b);
    printf("Answer : %d\n",sum=a+b);
}
*/



//                  PASSING VALUE BETWEEN FUNCTIONS

/*
    int calsum(int x, int y, int z); // 2nd variable in which value will passed in calsum function
    void main()
    {
        int a,b,c,sum; //variable declaration in main function
        printf("\nEnter any three elements = ");
        scanf("%d%d%d",&a,&b,&c);
        sum = calsum(a,b,c); // calsum function calling to use as syntax and perform calsum function between calsum in actually!
        printf("\nSum= %d",sum);// actually return d is converted into sum and output will be given
    }
    int calsum(int x, int y, int z) // calsum value defination in which program calsum() function declared and provided given task.
    {
        int d;
        d=x+y+z;
        return(d);// here output will be returned to (d) and calsum function will pick outout from (d)
    }
*/

//                                              CALL BY VALUE

/*
    void fun(int, int);
    void main(){
        int x=5, y=7;
        fun(x, y); // fun(x, y) arguments is known as values
        printf("x=%d\ny=%d\n",x,y); // second after fun(); this will run in last
    }
    void fun(int x, int y){
        x=7;
        y=5;
    printf("x=%d\ny=%d\n",x,y); // first fun(); will run by calling a value is x, y
    }
*/

//                                      CALL BY REFERENCE (it use pointers)
/*
    void fun(int* x, int* y);
        void main(){
        int x=5, y=7; // in this case this varibles will not in use
        fun(&x, &y); // calling to - void fun(int * x, int* y)
        printf("x=%d\ny=%d\n",x,y);// second after fun(); this will run in last
    }
    void fun(int* x, int* y){
        *x=7;
        *y=5;
    printf("x1=%d\ny1=%d\n", *x, *y); // first fun(); will run by calling a reference is x, y
    }
*/

//                          NO ARGUMENT NO RETURN TYPE

/*
void add(); // void keyword does not return any value.

void main()
{
    add();  // it will execute (1st)
}
void add() // 2nd
{
    int a,b,sum;
    printf("Enter Two Number for Addition (+) : ");
    scanf("%d%d",&a,&b);
    printf("%d",sum=a+b);
}
*/

// pending functions in c
