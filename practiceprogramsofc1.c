#include<stdio.h>
#include<conio.h>

int main(){
    int n, button;
    printf("Enter the Value of 'n' : ");
    scanf("%d",&n);
    if(n<=9){
        button=n;
        switch(button){
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    }
        else if(n>9) {
            printf("Greator than 9");
        }
    return 0;
}
