//質數判定通常有三種
//1. for(int i=2 ;i <n ;i++)
//2. for(int i =2 ;i< n/2+1;i++)
//3. for(int i =2;i < sqrt(n)+1;i++)
//但前兩者在n很大時會容易 TLE

#include <stdio.h>

int reverse_num(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int isPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){ 
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    while (scanf("%d", &N) == 1){

        if(!isPrime(N)){
            printf("%d is not prime.\n", N);
            continue;
        }

        int rev = reverse_num(N);

        if(rev != N && isPrime(rev)){
            printf("%d is emirp.\n", N);
        }else{
            printf("%d is prime.\n", N);
        }
    }
    return 0;
}
