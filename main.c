#include <stdio.h>
#include <stdlib.h>
#define NAME_SIZE 128

typedef char * String;

void greet();
int main() {
    greet();
}

void greet() {
    String name = malloc(NAME_SIZE);
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Greetings %s. Welcome back!", name);
}
