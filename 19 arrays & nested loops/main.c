//
//  main.c
//  infa course 19 Arrays & nested loops
//
//  Created by Michał Kiełkowski on 05/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int nums[3] [2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int i, j;
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 1; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
