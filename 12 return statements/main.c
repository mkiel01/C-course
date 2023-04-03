//
//  main.c
//  infa course 12 return statement
//
//  Created by Michał Kiełkowski on 29/12/2020.
//

#include <stdio.h>

double cube(double num) {
    
    return  num * num * num;
    
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Answer: %f", cube(3.0));
    
    
    
    return 0;
}
