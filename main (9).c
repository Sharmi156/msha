/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/#include <stdio.h>   //This is the header file for using scanf and printf functions in the program
#include <stdlib.h> 
int main()
{
    int a[3][3],i,j;   //declaration of integers as an array for matrix
    int sa[10],k=0;
    printf("Enter elements for 3 * 3 matrix\n");
    for(i=0;i<3;i++)             //for loop for matrix elements scanning as input
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);   //getting input from user
            sa[k]=a[i][j];
            k++;

        }
    }
    printf("Matrix Elements are\n");
    for(i=0;i<3;i++)                    //for loop
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);     //display the matrix elements
        }
        printf("\n");
    }
    printf("Duplicate Array Elements are\n");
        for(int i=0;i<9; i++)             //for loop
    {
        for(int j=i+1;j<9;j++)
        {
            if(sa[i] == sa[j])           //condition for finding the duplicate element from the matrix by comparing
            {
                printf("%d ", sa[j]);   //getting output
            }
        }
    }
    return 0;
}


// Used to find the similar digits in the given matrix of a list
    


