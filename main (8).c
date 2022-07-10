/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>                                   //This is the header file for using scanf and printf functions in the program
int main()
{
    int i,j,r,c,n,sum=0;                             //Declaring integers, 'i and j' for For Loop, 'r' is No. of Rows, 'c' is No. of Columns, sum is for addition of columns
    int a[10][10];                                   //It is the matrix array with maximum limit
    printf("Enter the number of rows and columns:"); //print function to intimate user to give the No. of Rows and No. of Columns as input
    scanf("%d %d",&r,&c);                            //Gets No. of Rows and No. of Columns as an input
    printf("Enter the matrix elements:\n");          //print function to intimate user to give the Matrix Elements as input
    for(i=0;i<r;i++)                                 //For loop with Initialization from zero, Condition and Post Increment. 'i' gets incremented when inner loop gets completed
    {
    for(j=0;j<c;j++)                                 //Nested For Loop with Initialization from zero, Condition and Post Increment. 'j' gets incremented when its block of statement gets executed
    {
    scanf("%d",&a[i][j]);                            //Gets Matrix elements in the form of an array as an input
    }
    }
    printf("Enter column number to be added: ");     //print function to intimate user to give the column number to be added
    scanf("%d",&n);                                  //gets the column number
    for(i=0;i<r;i++)                                 //For loop with Initialization from zero, Condition and Post Increment. 'i' gets incremented when inner loop gets completed
    {
        for(j=0;j<c;j++)                             //Nested For Loop with Initialization from zero, Condition and Post Increment. 'j' gets incremented when its block of statement gets executed
        {
          if(i<r&&j==n)                              //if condition with logical AND, and checks whether the operands are equal or not, and it is used for addition of a particular column  
          sum=sum+a[i][j];                           //The above Satisfied Condition gets added up here
        }
    }
    printf("%d",sum);                                //prints the sum of the column elements
}

