#include<stdio.h>
void main(){

// Structure basic program

/*
struct Student
{
    int rollno;
    char name[10];
    float marks;
}S1;
    scanf("%d\n%s\n%f", &S1.rollno, S1.name, &S1.marks);
    printf("%d\n%s\n%f\n", S1.rollno, S1.name, S1.marks);
}
*/

// struct basic 2

/*
struct book
    {
    char name[10];
    int pages[50];
    float price[5];
    };
    struct book b1;
        printf("Enter the Book name, pages, price");
        scanf("%s%d%f", b1.name, &b1.pages, &b1.price);
        printf("Your Book Details:  %s\n%d\n%f\n", b1.name, b1.pages, b1.price);
}
*/


/*
struct book
    {
    char name[10];
    int pages[50];
    float price[5];
    };
    void main(){
    struct book b1;
        printf("Enter the Book name, pages, price");
        scanf("%s%d%f", &b1.name, &b1.pages, &b1.price);
        printf("Your Book Details:  %s\n%d\n%f\n", b1.name, b1.pages, b1.price);
}
*/

// Array of structures in c

/*
int i;
struct student
{
    int rollno;
    char name[10];
    float marks;
};
struct student s[3]; // array with structures helps to make structure objects in 3 times
    for(i=1; i<4; i++) // 1<4 beacause i want to show numbring with structure print
    {
        scanf("%d%s%f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    for(i=1; i<4; i++)
    {
        printf("Data of Student%d\n%d\n%s\n%f\n",i, s[i].rollno, s[i].name, s[i].marks);
    }
}
*/


//          Pointers to Structures in C

//
    struct Student
    {
        int rollno[10];
        char name[10];
        float marks[10];
    };
    struct Student s1 = {10, "Mridul", 23};
    struct Student *ptr=&s1;

    printf("%d\n%s\n%f", *ptr -> rollno, *ptr -> name, *ptr -> marks);
}
//

//

//

//
