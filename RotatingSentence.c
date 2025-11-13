#include <stdio.h>
#include <string.h>

int main() {
    char lines[105][105];
    int lengths[105];
    int n = 0, max_length = 0,c;

    while((c = getchar()) != EOF) {
        int k = 0;
        if(c == '\n') {
            lines[n][lengths[n]] = '\0';
            if(lengths[n] > max_length) {
                max_length = lengths[n];
            }
            n++;
            continue;
        }
        lines[n][k++] = c;

        while((c = getchar()) != '\n' && c != EOF) {
            lines[n][k++] = c;
        }
        lines[n][k] = '\0';
        lengths[n] = k;

        if(k > max_length) {
            max_length = k;
        }
        n++;
    }
    
    for(int i = 0; i < max_length; i++) {
        for(int j = n - 1; j >= 0; j--) {
            if(i < lengths[j]) {
                putchar(lines[j][i]);
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}