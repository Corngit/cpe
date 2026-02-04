#include <stdio.h>

int main(){
    long int N;
    scanf("%ld", &N);

    for(long int i = 0; i < N; i++){
        long int x1, y1, x2, y2;
        scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long int step1 = ((x1 + y1 + 1)* (x1 + y1)) / 2 + x1; 
        long int step2 = ((x2 + y2 + 1)* (x2 + y2)) / 2 + x2; 
        
        printf("Case %d: %ld\n", i + 1, step2 - step1);
    }
}