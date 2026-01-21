// 題目裡的無號整數意思是非負整數

#include <stdio.h>
#include <stdlib.h>

static int cmp_uint(const void *p1, const void *p2) {
    unsigned int a = *(const unsigned int*)p1;
    unsigned int b = *(const unsigned int*)p2;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main() {
    int a;
    while (scanf("%d", &a) == 1) {

        unsigned int *arr = (unsigned int*)malloc(sizeof(unsigned int) * (size_t)a);

        for (int i = 0; i < a; i++) {
            scanf("%u", &arr[i]);
        }

        // sort
        qsort(arr, (size_t)a, sizeof(unsigned int), cmp_uint);

        // L 和 U
        unsigned int L = arr[(a - 1) / 2];
        unsigned int U = arr[a / 2];

        // 第一個輸出：A 取能最小的那個
        unsigned int A = L;

        // 第三個輸出：可能的 A 有幾個
        unsigned int numA = U - L + 1;

        // 第二個輸出：有幾個 Xi 落在 [L, U]
        unsigned int count = 0;
        for (int i = 0; i < a; i++) {
            if (arr[i] >= L && arr[i] <= U) count++;
        }

        printf("%u %u %u\n", A, count, numA);

        free(arr);
    }
    return 0;
}
