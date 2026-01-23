# include <stdio.h>
# include <stdlib.h>

void bangla(long long n){
    if(n>=10000000){
        bangla(n/10000000);
        printf(" kuti");
        n = n % 10000000;
    }
    if(n>=100000){
        bangla(n/100000);
        printf(" lakh");
        n = n % 100000;
    }
    if(n>=1000){
        bangla(n/1000);
        printf(" hajar");
        n = n % 1000;
    }
    if(n>=100){
        bangla(n/100);
        printf(" shata");
        n = n % 100;
    }
    if(n>0){
        printf(" %lld",n);
    }
}

int main(){
    long long n;
    int line = 1;

    while(scanf("%lld",&n) == 1){
        printf("%4d.",line++);

        if(n == 0){
            printf(" 0\n");
            continue;
        }
        else{
            bangla(n);
            printf("\n");
        }
    }
    return 0;
}