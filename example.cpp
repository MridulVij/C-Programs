#include<stdio.h>

// Arrow and Dot operator in c

//          Arrow Operator
//
struct student
{
    int stuno;
} ;

int main()
{
    struct student stu1;
    struct student pstu;

    *pstu = &stu1;
    stu1.stuno = 10;
    printf("%d", *pstu.stuno);
    return 0;
}
//

//      Dot Operator

/*
typedef struct point
{
    int x; // variable declaration (object declaration)
    int y;
} point;
int main()
{
    point p1; // (p1) - object declaration though (point)
    p1.x = 3; // p1 is an object and x is member of point struct
    p1.y = 2; // p2 is an object and y is member of point struct
    printf("%d\n%d", p1.x, p1.y); // dot operator is used to find member though object.
    return 0;
}
*/
