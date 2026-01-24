#include <stdio.h>

int main(){
    long long  D;
    long long S;

    while(scanf("%lld %lld",&S,&D) == 2){
        long long sum =S;
        while(sum<D){
            S++;
            sum += S;
        }
        printf("%lld\n",S);
    }
}