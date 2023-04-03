//
//  main.c
//  infa course 24 reading files
//
//  Created by Michał Kiełkowski on 06/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    
    fgets(line, 255, fpointer);
    printf("%s", line);
    
    fclose(fpointer);
    return 0;
}
