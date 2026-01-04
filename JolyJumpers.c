#include <stdio.h>
#include <stdlib.h>
int main(){

    int n,k;
    int a[3000];

    while(scanf("%d",&n) == 1){
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if (n <= 1) {
            printf("Jolly\n");
            continue;
        }

        int used[3000] = {0}; // used[d] = 1 表示差值 d 出現過
        int ok = 1;

        for (int i = 1; i < n; i++) {
            int d = abs(a[i] - a[i - 1]);
            if (d < 1 || d > n - 1 || used[d]) {
                ok = 0;
                break;
            }
            used[d] = 1;
        }

        if (ok) {
            // 確認 1..n-1 都有出現
            for (int d = 1; d <= n - 1; d++) {
                if (!used[d]) {
                    ok = 0;
                    break;
                }
            }
        }

        printf(ok ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}