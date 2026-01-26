#include <stdio.h>

int main() {
    long long n, m;
    long long a[100005];

    while (scanf("%lld %lld", &n, &m) == 2) {
        int len = 0;
        int boring = 0;

        if (n <= 0 || m <= 1) {
            boring = 1;
        } else {
            while (1) {
                a[len++] = n;
                if (n == 1){
                    break;
                } 

                if (n % m != 0) {  
                    boring = 1;
                    break;
                }
                n /= m;            
            }
        }

        if (boring) {
            printf("Boring!\n");
        } else {
            for (int i = 0; i < len; i++) {
                if (i) printf(" ");
                printf("%lld", a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
