#include<stdio.h>
#include<conio.h>

//      basic program in auto static storage classes
/*
int a = 15; // global variable
void main()
{
    //int a = 10; // local variable - used in only main function
    fun1();
    {
        int a = 20;
        printf("Inside 'Block1' : %d\n", a);
    }
    {
        printf("\nInside 'Block2' : %d\n", a++);
    }
    printf("\nInside 'void main' : %d\n", a);
    return 0;
}
void fun1()
{
    int a = 23;
    printf("\nInside 'fun1' : %d\n", a);
}
*/


//          auto - Storage Class program

/*
    int main()
    {
        auto int x = 10;
        {
            auto int x; // because int x is inside a block so thats why auto storage class will generate garbage value
            printf("\nGarbage Value - %d\n", x);
        }
        printf("\nFixed Value - %d\n", x); // this is outside block but inside of auto int x = 10 block. so thats why x have a fixed value inside variable
        return 0;
    }
*/

//

//

//


//          Static Storage classes

/*
    void display();
    void main()
    {
        int i;
        for(i=0; i<3; i++)
        {
            display();
        }

    }
    void display()
    {
        register int x = 5;
        int y = 5;
        x++;
        y++;
        printf("\nx=%d\ny=%d\n",x,y);
    }
*/

//      Problems inside storage classes

/*
    int a; // here a is a global var is that extern type of storage class
    int main() // and global var value is always 0
    {
        printf("%d",a);
        return 0;
    }

*/

/*
    int fun() // function fun defination
    {
        int var;
        scanf("%d", &var);
        return var--;
    }
    int main() // function calling
    {
        for(fun(); fun(); fun())
        {
            printf("%d", fun());
            return 0;
        }
    }
*/
