#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int count;
}Tree;

int cmp(const void *a, const void *b) {
    Tree *treeA = (Tree *)a;
    Tree *treeB = (Tree *)b;
    return strcmp(treeA->name, treeB->name);
}

int main() {
    int T;
    char line[200];

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &T);

    fgets(line, sizeof(line), stdin); // 吃掉空行

    while (T--) {
        Tree trees[10000];
        int n = 0, total = 0;

        while (fgets(line, sizeof(line), stdin)) {
            if (line[0] == '\n'){ 
                break;
            }

            line[strcspn(line, "\n")] = '\0';  // 移除換行符號

            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(trees[i].name, line) == 0) {
                    trees[i].count++;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                strcpy(trees[n].name, line);
                trees[n].count = 1;
                n++;
            }
            total++;
        }

        qsort(trees, n, sizeof(Tree), cmp);

        for (int i = 0; i < n; i++) {
            printf("%s %.4f\n", trees[i].name, trees[i].count * 100.0 / total);
        }

        if (T) {
        printf("\n");
        }
    }
    return 0;
}