//
//  main.c
//  infa course 15 structs
//
//  Created by Michał Kiełkowski on 29/12/2020.
//

#include <stdio.h>
#include<string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(int argc, const char * argv[]) {
    
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
    
    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art");
    printf("%s\n", student2.name);
    
    return 0;
}
