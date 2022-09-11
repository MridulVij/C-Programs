#include<stdio.h>
// while loop syntax

/*

    initialization expression;
    while(test_expression)
        {
            // statement
            update_expression;
        }
*/

// basic program of while loop























// program to implement "While Loop" in C.

/*

int main()
{
 int i=1,number;

 printf("Enter a number: ");
 scanf("%d",&number);
 while(i<=10)
 {
  printf("%d\n",(number+i));
  i++;
 }
 return 0;
}

*/



















//syntax for Do While Loop

/*
initialization expression;
do
{
   // statements

   update_expression;
} while (test_expression);
*/

/* basic program for do while loop
int main(){
    int a=1;
    do{
        printf("Hello\n");
    } while(a<10);
}*/

// program to implement "Do While Loop" in C.
/*


int main()
{
 int i=-1,j;
 printf("Enter a number: ");
 scanf("%d",&j);
 do{
  printf("%d\n",i);
  i++;
 }while(i<1);
 return 0;
}
*/





// syntax for for loop

/*
for (initialization expr; test expr; update expr)
{
     // body of the loop
     // statements we want to execute
}*/


// program to implement "For Loop" in C.
/*
int main()
{
int i;
for(i=1;i<10;i++)
{
 printf("%d\n",i);
}
 return 0;
}
*/

// for loop waala
/*
int main(){
    int b;
    for(b=1;b<10;b++) //print Hello 9 times
    {
        printf("Hello\n");
    }
}*/


// nested for loop
// it will print starts in squares
int main()
{
    int size=5;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}//
