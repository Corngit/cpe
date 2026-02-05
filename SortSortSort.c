//qsort 將兩數相減，如果結果為正，則第一個數較大；如果結果為負，則第一個數較小；如果結果為零，則兩數相等。
#include <stdio.h>
#include <stdlib.h>

int m;

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    // 先比較餘數
    int remain_x = x % m;
    int remain_y = y % m;
    if(remain_x != remain_y) {
        return remain_x - remain_y;
    }

    // 如果餘數相同，則比較奇偶性
    int is_odd_x = (x % 2 != 0);
    int is_odd_y = (y % 2 != 0);
    if (is_odd_x != is_odd_y) {
        return is_odd_y - is_odd_x; // 奇數排在前面
    }

    //奇數按照數值大小排序，偶數按照數值大小排序
    if(is_odd_x) {
        return y - x; // 奇數按照數值大小排序，較大的在前面
    } else {
        return x - y; // 偶數按照數值大小排序，較小的在前面
    }
}

int main(){
    int n;
    while(scanf("%d %d", &n, &m) == 2 && (m != 0 || n != 0)) {
        int *arr = (int*)malloc(sizeof(int) * (size_t)n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr,(size_t)n, sizeof(int), cmp);

        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
        free(arr);
    }
    printf("0 0\n");
    return 0;
}