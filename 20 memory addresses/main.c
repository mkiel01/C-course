//
//  main.c
//  infa course 20 memory addresses
//
//  Created by Michał Kiełkowski on 06/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    
    printf("age :%p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
    
    
    return 0;
}
