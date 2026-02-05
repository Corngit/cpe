#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];

    while (scanf("%s", s) == 1) {
        if (strcmp(s, "0") == 0)
            break;

        int sum = 0;

        // 直到只剩一位數
        while (strlen(s) > 1) {
            sum = 0;

            for (int i = 0; s[i] != '\0'; i++) {
                sum += s[i] - '0';
            }

            // 把 sum 轉回字串
            //sprintf 函數用於將格式化的數據寫入字符串中。語法如下：
            //int sprintf(char *str, const char *format, ...);
            sprintf(s, "%d", sum);
        }

        printf("%s\n", s);
    }

    return 0;
}
