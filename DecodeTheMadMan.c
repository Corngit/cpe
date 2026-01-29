#include <stdio.h>
#include <string.h>

int main() {
    char talk[10005];

    const char *keyboard[4] = {
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"
    };

    while (fgets(talk, sizeof(talk), stdin)) {

        int len = strlen(talk);

        for (int i = 0; i < len; i++) {

            if (talk[i] >= 'A' && talk[i] <= 'Z') {
                talk[i] += 32;   // 大寫轉小寫
            }

            for (int k = 0; k < 4; k++) {
                int isspace = 0;

                for (int j = 0; j < strlen(keyboard[k]); j++) {

                    if (talk[i] == ' ') {
                        putchar(' ');
                        isspace = 1;
                        break;
                    }
                    else if (keyboard[k][j] == talk[i]) {
                        putchar(keyboard[k][j - 2]);
                        break;
                    }
                }

                if (isspace) {
                    break;
                }
            }
        }

        putchar('\n');
    }

    return 0;
}
