//
//  main.c
//  infa course 22 dereferencing pointers
//
//  Created by Michał Kiełkowski on 06/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int age = 30;
    int *pAge = &age;
    
    printf("%d", *pAge);
    return 0;
}
