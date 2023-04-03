//
//  main.c
//  infa course 17 building a guessing game
//
//  Created by Michał Kiełkowski on 30/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    
    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
        printf("enter a number: ");
        scanf("%d", &guess);
        guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
    printf("out of guesses\n");
    }
    else { printf("hey you win\n");
        
    }
    
    return 0;
}
