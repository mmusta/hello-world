#include <stdio.h>
#include <stdlib.h>

typedef char * String;

void greet();
int main() {
    greet();
}

void greet() {
    String name = malloc(64);
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Greetings %s. Welcome back!", name);
}