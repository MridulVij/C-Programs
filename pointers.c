#include<stdio.h>

//                      Address of variable using pointers

/*
#include<stdio.h>
int main()
{
    int variable = 10;
    printf("Address of Variable = %p\n",&variable); // here we use format specifier %u = unsigned int, %p = pointer
    printf("Value of Variable = %d\n",variable);
}
*/




//                         POINTER AND ADDRESS OPERATORS
/*
#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a; // method 1 for initialize
    //ptr = &a; // method 2 for initialize
    printf("Address of A Though address operator = %p\n",&a); // address of a via - &a
    printf("Value of A though A = %d\n",a); // value of a via - a
    printf("Address of Pointer = %p\n",ptr); // address of pointer - ptr
    printf("Value of A Pointer = %d\n",*ptr); // value of a via pointer - *ptr (dereference)
    printf("Address of Pointer via address operator = %p\n",&ptr); // address of pointer via a - &ptr
}
*/





//      Program - How to assign a pointer value to an another pointer

/*
#include<stdio.h>
int main()
{
    int a = 10, b = 5;
    int *p, *q;
    p=&a;
    q=p; // here we assign address of a to p to q
    printf("a = %d\n*p = %d\n*q = %d\n", a, *p, *q);
}
*/
/*
#include<stdio.h>
int main()
{
 int a = 10, b = 5;
    int *p, *q;
    p=&a;
    q=&b; // it prints value of a, b though *p, *q by astrick symbol (dereferencing)
    printf("a = %d\n*p = %d\n*q = %d\n", a, *p, *q);
}
*/

/*
#include<stdio.h>
int main()
{
 int a = 10, b = 5;
    int *p, *q;
    p=&a;
    q=&b;
    *q=*p; //it prints value of a, b coz of astrick symbol placed before p, q
    printf("a = %d\n*p = %d\n*q = %d\n", a, *p, *q);
}
*/

/*
#include<stdio.h>
int main()
{
 int a = 10, b = 5;
    int *p, *q;
    p=&a;
    q=&b; // it prints address of a to *p and b to *q
    printf("a = %d\n*p = %p\n*q = %p\n", a, p, q);
}
*/

//              POINTERS TO POINTERS

/* //Program to print values of pointer to pointer to normal variable

#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;// because of using * Dereference operator in printf it gives value of variable
    printf("%d\n%d\n%d\n", a, *p, **q);
    // a = prints value of a = 10
    // *p = prints value of a -> 10
    // **q = prints value of *p -> a -> 10
    // While Using astrick in printf the aster will work like dereference operator which prints value of variable
}
*/

/*  //Program to print address of pointer to pointer to another variable

#include<stdio.h>
int main()
{
    int var = 20;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;
    printf("%d\n%p\n%p\n", var, ptr1, ptr2);
    // var = prints value of var = 20
    // ptr1 = prints address of var
    // ptr2 = prints address of ptr1
    // here we use only pointer variable name (ptr1) to print adddress of variable
}
*/

//  Astrick pointer variable Representation

/*

#include<stdio.h>
int main()
{
    int var = 20;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    // Representation Method - 1
    printf("Representation Method 1\n");
    printf("var = %d\n", var);
    printf("ptr1 = %d\n",*ptr1);
    printf("ptr2 = %d\n",*(*ptr2));
    printf("ptr3 = %d\n",*(*(*ptr3)));
    // Representation Method - 2
    printf("Representation Method 2\n");
    printf("var = %d\nptr1 = %d\nptr2 = %d\nptr3 = %d\n", var, (*ptr1), (**ptr2), (***ptr3));
}
*/

//                      POINTER ARITHMATIC ADDITION

/*

#include<stdio.h>
int main()
{
    int a[5]={1,4,12,-8,0};
    int *p=&a[0];
    p=p+2;
    printf("Value is: %d\n",*p);
    printf("Address is: %p\n",p);
}
*/

/*

#include<stdio.h>
int main()
{
    int a[5]={1,4,12,-8,0};
    int *p=&a[0];
    p=p+2;
    *p=24; // *p is pointing the value 24 because we give value to pointer direct
    printf("Value is: %d\n",*p);
    printf("Address is: %p\n",p);
}
*/

//                  POINTER ARITHMATIC SUBSTRACTION

/*

#include<stdio.h>
int main()
{
    int a[5]={0,1,-1,10,11,12};
    int *p=&a[0];
    int *q=&a[3];
    int d;

    d = p-q;

    printf("Difference Between p-q Indexing is: %d\n",d);
    printf("Address of p: %u\n",p);
    printf("Address of q: %u\n",q);
    printf("Value of p: %d\n",*p);
    printf("Value of q: %d\n",*q);
}
*/

//              with q=q-2

/*

#include<stdio.h>
int main()
{
    int a[5]={0,-21,-1,10,11,12};
    int *p=&a[1];
    int *q=&a[3];

    int d=q-2;
    int d1=p-2;

    printf("Difference Between p-q Indexing is: %p\n",d);
    printf("Address of p: %p\n",p);
    printf("Address of q: %p\n",q);
    printf("Value of p: %d\n",*p);
    printf("Value of q: %d\n",*q);
}
*/

//              problems in pointers in increment/decrement

/*

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p, *q;

    p=a;
    q=&a[0]+3;

    printf("*p values initialize\n");
    printf("%d\n%d\n%d\n",(*p)++,*(++p));
    printf("%p\n",*p);
    printf("%d\n",(*p)++);
    printf("\n\n*q values initialize\n");
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n", *(p+2)-2);
    printf("%d\n",*(p++ -2)-1);
}
*/

//              NULL POINTER

/*

#include<stdio.h>
int main()
{
    int a=10;
    int *ptr; // gives garbage value
    int *ptr1=NULL; // gives 0 as NULL
    int *ptr2=NULL; // gives 0 as NULL
    int *ptr3=&a; // gives address of a varible

    printf("Address of ptr: %p Garbage Address\n",&ptr);
    printf("Value of ptr: %d Garbage Value\n",*ptr);
    printf("Address of ptr1: %d\n",ptr1);
    printf("Address of ptr2: %d\n",ptr2);
    printf("Address of ptr3: %p\n",&ptr3);
    printf("Value of ptr3: %d\n",*ptr3);
}
*/

//                VOID POINTER

/*

#include<stdio.h>
int main()
{
    int a=10;
    void *vp;
    vp=&a;
    printf("%d",*(int *)vp);
}
*/

/*

#include<stdio.h>
int main()
{
    int a = 10;
    float b = 1.10;
    char c = 'A';

    void *ip = &a;
    void *fp = &b;
    void *cp = &c;

    printf("Value of A: %d\n",*(int *)ip); // in this typecasting in [*(int *)ip] will be give correct value
    printf("Value of B: %f\n",*(float *)fp);
    printf("Value of C: %c\n",*(char *) cp);
    printf("Address of A: %p\n",&ip);// in this ip will give direct address of void pointer
    printf("Address of B: %p\n",&fp);
    printf("Address of C: %p\n",&cp);
}
*/

//                  WILD POINTER

/*

#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=(int *)malloc(sizeof(int));
    *ptr = &a;
    printf("%d",*ptr);
}
*/


//              DANGLING POINTER

//

#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr=(int *)malloc(sizeof(int)); // ptr mai int ka datatype hai or ussme memory ni size allocate krr rkha h int data type ka
    //int *ptr=10;
    *ptr=&a; //it does not print value it means dereference does not work in it.
    printf("Address is: %d\n",*ptr);
    printf("Garbage Value is: %d\n",ptr);
}
//

//

//

//

