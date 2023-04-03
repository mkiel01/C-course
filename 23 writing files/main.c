//
//  main.c
//  infa course 23 writing files
//
//  Created by Michał Kiełkowski on 06/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE * fpointer = fopen("employeses.txt", "w");
    
    fprintf(fpointer, "Jim, salesman\nPam, Receptionist\nOscar, Accounting");
    
    fclose(fpointer);
    
    printf("Hello, World!\n");
    return 0;
}
