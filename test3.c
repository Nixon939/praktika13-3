#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Failed to open file '%s'\n", argv[1]);
        return 1;
    }
    
 
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    

    fclose(file);
    return 0;
}