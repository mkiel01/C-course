//
//  main.c
//  infa course 7 getting user input
//
//  Created by Michał Kiełkowski on 27/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...E");
    /*int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);*/
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    
    
    return 0;
}
