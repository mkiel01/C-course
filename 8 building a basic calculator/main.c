//
//  main.c
//  infa course 8 building a basic calcualtor
//
//  Created by Michał Kiełkowski on 28/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter secound number: ");
    scanf("%lf", &num2);
    
    printf("Answer: %f", num1 + num2);
    return 0;
}
