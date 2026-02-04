#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 2000
#define MAXLEN 100
// strcmp, strcpy 分別代表字串比較與複製
// strcpy(dest, src): 將 src 複製到 dest
// strcmp(str1, str2): 比較 str1 與 str2，若相等回傳 0，str1 大於 str2 回傳正值，str1 小於 str2 回傳負值
char countries[MAXN][MAXLEN];
int count[MAXN];
int size = 0;

int main() {
    int N;
    scanf("%d", &N);
    char dummy[3];
    fgets(dummy, sizeof(dummy), stdin); // 讀掉換行符號

    for (int i = 0; i < N; i++) {
        char line[200];
        fgets(line, sizeof(line), stdin);

        // 取第一個單字（國家）
        char country[MAXLEN];
        sscanf(line, "%s", country); //sscanf 會自動在空白處停止

        // 看這國家有無出現過
        int found = -1;
        for (int j = 0; j < size; j++) {  // size 是目前國家數量
            if (strcmp(countries[j], country) == 0) { // 找到
                found = j;   //意思是記錄位置
                break;
            }
        }

        if (found == -1) {
            strcpy(countries[size], country);
            count[size] = 1;
            size++;    // 國家數量增加
        } else {
            count[found]++;
        }
    }

    // 依國家名稱排序（同時要顧 count）
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(countries[i], countries[j]) > 0) {
                char tmp[MAXLEN];
                strcpy(tmp, countries[i]);
                strcpy(countries[i], countries[j]);
                strcpy(countries[j], tmp);

                int t = count[i];
                count[i] = count[j];
                count[j] = t;
            }
        }
    }

    // 輸出
    for (int i = 0; i < size; i++) {
        printf("%s %d\n", countries[i], count[i]);
    }

    return 0;
}
