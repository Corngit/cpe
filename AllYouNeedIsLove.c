# include <stdio.h>

static unsigned long long bin(const char*s){
    unsigned long long x =0;
    for(int i=0; s[i]; i++){
        x = (x<<1) + (unsigned long long)(s[i] - '0');
    }
    return x;
}

static unsigned long long gcd(unsigned long long a, unsigned long long b){
    while(b!=0){
        unsigned long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(){
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        char s1[205], s2[205];
        scanf("%s %s", s1, s2);
        unsigned long long a = bin(s1);
        unsigned long long b = bin(s2);
        unsigned long long g = gcd(a, b);
        printf("Pair #%d: ", t+1);
        if(g == 1){
            printf("Love is not all you need!\n");
        } else {
            printf("All you need is love!\n");
        }
    }
    return 0;
}