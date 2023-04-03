//
//  main.c
//  infa course 9 building a mad libs game
//
//  Created by Michał Kiełkowski on 28/12/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char color[20];
    char plularNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Entern a color: ");
    scanf("%s", color);
    printf("Entern a plularNoun: ");
    scanf("%s", plularNoun);
    printf("Entern a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);
    
    printf("Roses are %s\n", color);
    printf("Violets are %s\n", plularNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    return 0;
}
