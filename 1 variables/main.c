//
//  main.c
//  infa course C 1 variables
//
//  Created by Michał Kiełkowski on 26/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char characterName[] = "Jhon";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    
    characterAge = 40;
    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);
    return 0;
    
}
