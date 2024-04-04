
#include <stdio.h>  
int main()  
{ 
    int number1, number2;   
    float answer;
    char op;
    
    printf (" Enter the operation to perform(+, -, *, /) \n ");  
    scanf ("%c", &op);
    printf (" Enter the first number: ");  
    scanf(" %d", &number1); 
    printf (" Enter the second number: ");  
    scanf (" %d", &number2); 
    
    //addition  
    if (op == '+')  
    {  
        answer = number1 + number2; 
        printf (" %d + %d = %f", number1, number2, answer);  
    }  
    
    //substraction  
    else if (op == '-')  
    {  
        answer = number1 - number2; 
        printf (" %d - %d = %f", number1, number2, answer);  
    }  
    
    //multiplication  
    else if (op == '*')  
    {  
        answer = number1 * number2;  
        printf (" %d * %d = %f", number1, number2, answer);  
    }  
    
    //division  
    else if (op == '/')  
    {  
        if (number2 == 0) 
        {  
            printf (" \n Divisor cannot be zero. Please enter another value ");  
            scanf ("%d", &number2);        
        }  
        answer = number1 / number2; 
        printf (" %d / %d = %.2f", number1, number2, answer);  
    }  
    else  
    {  
        printf(" \n Enter valid operator ");  
    }  
    return 0;  
}