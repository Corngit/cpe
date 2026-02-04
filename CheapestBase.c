#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) 
    	return 0;

    for (int tc = 1; tc <= T; tc++) {
        int cost[36];
        for (int i = 0; i < 36; i++) {
        	scanf("%d", &cost[i]);
		}
        int Q;
        scanf("%d", &Q);

        printf("Case %d:\n", tc);

        while (Q--) {
            int n;
            scanf("%d", &n);

            long long best = (1LL << 60); //1LL 是 long long 型態 1 左移60位元
            int ans[40], cnt = 0;

            for (int base = 2; base <= 36; base++) {
                int tmp = n;
                long long sum = 0;

                if (tmp == 0) {
                    sum = cost[0];                 //特別處理數字 0 的情況，因為 while 迴圈不會進入，所以直接加上 cost[0]
                } else {
                    while (tmp > 0) {             //計算在該 base 下的花費 取餘數後除基數
                        sum += cost[tmp % base];
                        tmp /= base;
                    }
                }

                if (sum < best) {
                    best = sum;
                    cnt = 0;
                    ans[cnt++] = base;
                } else if (sum == best) {
                    ans[cnt++] = base;
                }
            }

            printf("Cheapest base(s) for number %d:", n);
            for (int i = 0; i < cnt; i++){ 
            	printf(" %d", ans[i]);
            }
           	putchar('\n');
        	}
        	if(tc!=T){
        		putchar('\n');
        	}
    }

    return 0;
}
