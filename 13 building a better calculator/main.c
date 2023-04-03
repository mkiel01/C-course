//
//  main.c
//  infa course 13 building a better calculator
//
//  Created by Michał Kiełkowski on 29/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double num1;
    double num2;
    char op;
    printf("enter a number : ");
    scanf("%lf", &num1);
    printf("enter a operator: ");
    scanf(" %c", &op);
    printf("enter a number: ");
    scanf("%lf", &num2);
    
    if(op == '+'){
        printf("%f", num1 + num2);
    }else if (op == '-'){
        printf("%f", num1 - num2);
    }
        else if (op == '/'){
            printf("%f", num1 / num2);
        }
            else if (op == '*'){
                printf("%f", num1 * num2);
    } else {
        printf("invalid operator");
    }
    
    
    
    
    
    return 0;
}
