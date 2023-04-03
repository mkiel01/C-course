//
//  main.c
//  infa course 21 pointers
//
//  Created by Michał Kiełkowski on 06/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa= &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    
    
    printf("age: %p\n", &age);
    return 0;
}
