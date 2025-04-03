#include <stdio.h>

// Define a callback function type
//typedef void (*CallbackFunc)(int);

// Callback function to handle the Addition - Example 1
void Addition(int a, int b) 
{
    printf("Addition:\t %d\n", a+b);
}

// Callback function to handle the Subtraction - Example 2
void Subtraction(int a, int b) 
{
    printf("subtraction:\t %d\n", b-a);
}

// Callback function to handle the Multiplication - Example 3
void Multiplication(int a, int b) 
{
    printf("Multiplication:\t %d\n", a*b);
}

int main() 
{
    // Array of callback function pointers
    void (*CallbackFunc[])(int,int) = {Addition, Subtraction, Multiplication};

    // Simulate calling different callback functions based on some condition
    int opt;
    printf("Enter the option:\n");
    scanf("%d",&opt);
    // Call the appropriate callback function based on the index
    CallbackFunc[opt-1](10,20);

    return 0;
}

