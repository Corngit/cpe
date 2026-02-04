#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int s,d,a,b;
        scanf("%d %d", &s, &d);
        a = (s + d) / 2;

        if ((s+d)%2 != 0){
            printf("impossible\n");
            continue;
        }
        b = s - a;
        if(b < 0){
            printf("impossible\n");
            continue;
        }
        if(a>b){
            printf("%d %d\n", a, b);
        }else{
            printf("%d %d\n", b, a);
        }
    }
    return 0;
}