#include <stdio.h>
#include "arithmetic_operations.h"

int main()
{   
    
    float a, b;
    char choice;
    while(1)
    {  
        choice = ' ';
        printf("Choose arithmetic operation | + - * / |\nor q to quit\n");
        scanf("%c", &choice);
      
        getchar();
        
        if(choice == 'q')
        {
            printf("You have quit the program\n");
            return 0;
        }
        
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        getchar();
        switch (choice)
        {
        case '+':
            printf("Result: %f\n", add(a,b));
            break;
        case '-':
            printf("Result: %.f\n", subtract(a, b));
            break;
        case '*':
            printf("Result: %f\n", multiply(a, b));
            break;
        case '/':
            printf("Result: %f\n", divide(a, b));
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}