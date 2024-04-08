#include <stdio.h>
#include <string.h>  // for strcopy

const int MAX_NAME_LENGTH = 50;

struct Person 
{
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
};


int main() 
{
    struct Person alice;
    
    strcpy(alice.name, "Alice Sara Ott");
    alice.age = 33;
    alice.gender = 'F';
    
    printf("Name: %s\n", alice.name);
    printf("Age: %d\n", alice.age);
    printf("Gender: %c\n", alice.gender);
    
    return 0;
}