//
//  main.c
//  infa course 18 for loop
//
//  Created by Michał Kiełkowski on 05/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    /*int i = 1;
    while(i <= 5) {
    printf("%d\n", i);
        i++;
    }
     */
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int i;
    for(i = 0; i < 6; i++){
        printf("%d\n", luckyNumbers[i]);
        
    }
    return 0;
}
