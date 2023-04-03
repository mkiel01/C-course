//
//  main.c
//  infa course 14 switch statements
//
//  Created by Michał Kiełkowski on 29/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char grade = 'C';
    
    switch (grade) {
        case 'A' :
            printf("you did great");
            break;
        case 'B' :
            printf("you did alright");
            break;
        case 'C' :
            printf("you did poorly");
            break;
        case 'D' :
            printf("you did very bad");
            break;
        case 'F' :
            printf("you failed the test");
            break;
        default :
            printf("invaild grade");
    }
    
    return 0;
}
