//
//  main.c
//  infa course 11 functions
//
//  Created by Michał Kiełkowski on 28/12/2020.
//

#include <stdio.h>


void sayHi(char name[], int age){
    printf("hello %s, you are %d\n",name, age);
    

}
int main(int argc, const char * argv[]) {
    
    printf("top");
    sayHi("Mike", 1);
    sayHi("Tom", 3);
    sayHi("Mkse", 12);
    printf("bottom");
    return 0;
}


