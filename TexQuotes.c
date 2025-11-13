#include <stdio.h>

int main(){
    char c;
    int inquote = 0;
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (inquote == 0) {
                printf("``");
                inquote = 1;
            } else {
                printf("''");
                inquote = 0;
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}