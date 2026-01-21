// 此題玩 ASCII
// ascii 只有 0-255 共 256 個字元
// 排序用 qsort

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    unsigned char ch; // 用 unsigned char 比較安全
    int freq;
} Node;

// freq 小到大；freq 相同 ASCII 大到小
int cmp(const void* a, const void* b){
    const Node* na = (const Node*)a;
    const Node* nb = (const Node*)b;

    if (na->freq != nb->freq)
        return na->freq - nb->freq;          
    return (int)nb->ch - (int)na->ch;        
}

int main(){
    char s[1001];
    int first = 1;

    while (fgets(s, sizeof(s), stdin)) {
        // 移除換行符號
        int len = (int)strlen(s);
        while (len > 0 && (s[len-1] == '\n' || s[len-1] == '\r')) {
            s[--len] = '\0';
        }
        
        int frequency[256] = {0};

        // 計數
        for (int i = 0; s[i]; i++) {
            frequency[(unsigned char)s[i]]++;
        }

        Node nodes[256];
        int node_count = 0;

        for (int i = 0; i < 256; i++) {
            if (frequency[i]) {
                nodes[node_count].ch = (unsigned char)i;
                nodes[node_count].freq = frequency[i];
                node_count++;
            }
        }

        qsort(nodes, node_count, sizeof(Node), cmp);

        if (!first) {
            printf("\n");
        }
        first = 0;

        for (int i = 0; i < node_count; i++) {
            printf("%d %d\n", (int)nodes[i].ch, nodes[i].freq);
        }
    }
    return 0;
}
