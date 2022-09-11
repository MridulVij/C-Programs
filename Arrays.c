#include<stdio.h>
#include<stdlib.h>
int main(){

//              A SIMPLE PROGRAM USING ARRAY
//        finding average using array with for loop

/*
    int avg, sum=0;
    int i;
    int marks[10];
    for(i=0; i<=9; i++){
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
    for(i=0; i<=9; i++)
        sum=sum+marks[i];
        avg=sum/10;
        printf("\nAverage marks: %d",avg);
}
*/

//              Entering Data into Array and print exact entered data previously

//                                   FORWARD DATA ENTERING IN ARRAY

/*
    int i;
    char yes = 'y', no = 'n';
    int data[10]; // size of array according to int datatype 4x10=40 bytes consuming in memory

    for(i=0; i<=9; i++) //  // saving data by increasing index value one by one into array size of 10
    {
        printf("Enter Data: ");
        scanf("%d", &data[i]);
    }
    printf("Data Enter Successfully\n");
        for(i=0; i<=9; i++)
    {
        printf("%d\n", data[i]);
    }
}
*/

//              REVERSE OF ARRAY

/*
    int i;
    char yes = 'y', no = 'n';
    int data[10]; // size of array according to int datatype 4x10=40 bytes consuming in memory

    for(i=0; i<=9; i++) //  // saving data by increasing index value one by one into array size of 10
    {
        printf("Enter Data: ");
        scanf("%d", &data[i]);
    }
    printf("Data Enter Successfully\n");
        for(i=9; i>=0; i--)
    {
        printf("%d\n", data[i]);
    }
    printf("Array Values Reversed Successfully");
}
*/

//          FINDING SUM & AVERAGE FROM ARRAY

/*
    int marks[5], i;
    int sum = 0, avg;
    for(i=0; i<5; i++){
        printf("Enter the Marks: ");
        scanf("%d",&marks[i]);
    }
    for(i=0; i<5; i++){
        sum = sum/5;
    }
    avg=sum/5;
    printf("%d\n",avg);
    printf("%d\n",sum);
}
*/

//              WAP to read an array of 10 integers and count total No. of even or odd elements.

/*
    int a[5], i;
    int even=0, odd=0;
    for(i=0; i<10;i++){
        printf("Enter the Numbers: ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        if(a[i]%2==0){
            even=even+1; // finding even elements from array value
        }
        else {
            odd=odd+1;  // finding odd elements from array value
        }
    }
        printf("\nEven element are = %d\n", even);
        printf("\nOdd element are = %d\n", odd);

}
*/

//  WAP to read two arrays of size 5 & store sum of these arrays into third arrays

/*
    int arr1[5], arr2[5], SumArr[5];
    int i;
    for(i=0; i<5; i++){
        printf("Enter Elements for [Arr1]: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<5; i++){
        printf("Enter Elements for [Arr2]: ");
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<5; i++){
        SumArr[i]=arr1[i]+arr2[i];
        printf("SumArray element at index %d is = %d\n", i, SumArr[i]);
    }
}
*/

//

//

//

