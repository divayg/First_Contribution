//WAp to find cube of a number using function
#include <stdio.h>
int cube (int);								// Function declaration
 
int main()
{
    int n, c;	
 
    printf("Enter any number: ");
    scanf("%d", &n);					//Inputting number from user
 
    c = cube(n);
 
    printf("Cube of %d is %d", n, c);
}
cube(int n)								//Function to find cube of any number
{
    return (n * n * n);
}
