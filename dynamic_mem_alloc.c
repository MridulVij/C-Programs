#include<stdio.h>

void main(){

//      DYNAMIC MEMORY ALLOCATION
//                  malloc() function

/*
int n,i,*ptr;

    printf("Enter How much you want to allocate - Bytes:");
    scanf("%d",&n);
    printf("%d Bytes Allocated Successfully!\n", n);

    ptr =(int *) malloc (n * sizeof(int));

    printf("Enter %d Values you want to Save in - Bytes:\n", n);

    for(i=0; i<n; i++)
        {
            printf("\nEnter Value %d :", i);
            scanf("%d",(ptr+i));
        }
    printf("\nThe Entered values are:\n");
    for(i=0; i<n; i++)
        {
            printf("%d\n", *(ptr+i));
        }
printf("Malloc Memory will be freed!");
free(ptr);
}
*/


//              calloc() function

//
    int n,i,*ptr;

    printf("Enter How much you want to allocate - Bytes:");
    scanf("%d",&n);
    printf("%d Bytes Allocated Successfully!\n", n);

    ptr =(int *) calloc (n, sizeof(int));

    printf("Enter %d Values you want to Save in - Bytes:\n", n);

    for(i=0; i<n; i++)
        {
            printf("\nEnter Value %d :", i);
            scanf("%d",(ptr+i));
        }
    printf("\nThe Entered values are:\n");
    for(i=0; i<n; i++)
        {
            printf("%d\n", *(ptr+i));
        }
printf("Malloc Memory will be freed!");
free(ptr);
}

//
