/*#include <iostream>
using namespace std;*/

#include<stdio.h>

int table_generator_call()
{
    long long int num, sum;
    double i;
    std::cout<<"\t\tMATHEMATICS - Table Generator\t\t";
    std::cout<<"\n\t\tEnter the Number Value\t\t\n";
    std::cin>>num;
    for(i=1; i<=10; i++)
    {
        sum = num*i;
        std::cout<<num<<"x"<<i<<"="<<sum<<endl;
    }
    printf("\n\t\tEnter the Number Value for More Table Generation!\t\t\n");
    moreTables();
}

void moreTables()
{
    int num2, i2, sum2;
    scanf("%d", &num2);
    for(i2=1; i2<=10; i2++)
    {
        sum2 = num2*i2;
        printf("%d X %d = %d\n", num2, i2, sum2);
    }
     // pending in this user will enter input how much they want to generate tables = no. of input == no. of tables generated
     //moreTables();
}


void welcome()
{
cout<<"    //\   /\\      ||||\\   ||||||||   ||||\\    ||    ||   ||      \n";
cout<<"   //  \ /  \\     ||   ))     ||      ||   \\   ||    ||   ||      \n";
cout<<"  //    |    \\    ||||//      ||      ||    ))  ||    ||   ||      \n";
cout<<" //           \\   ||  \\      ||      ||   //   ||    ||   ||      \n";
cout<<"//             \\__||   \\__||||||||___||||//____||||||||___||||||||\n";
}
