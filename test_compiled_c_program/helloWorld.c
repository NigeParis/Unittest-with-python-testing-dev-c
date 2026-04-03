#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    (void) argv[1];
    
    printf("Hello World!");
    if (argc > 1) {
        fprintf(stderr, "This is an error message test\n");

    }
    return (0);
}

// cc helloWorld.c -o hello