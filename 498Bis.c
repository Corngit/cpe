# include <stdio.h>

int main(){
    long long x, a[10000];
    int n; 
    while((scanf("%lld", &x))!=EOF){
        n = 0;
        while(scanf("%lld", &a[n]) == 1){
            int c  = getchar();
            while(c == ' ' ){
                c = getchar();
            }
            if(c == '\n' || c == EOF){
                break;
            }
            ungetc(c, stdin);
            n++;
        }
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum = sum*x + (n-i)*a[i]; 
        }
         printf("%lld\n", sum); 
    } 
    return 0;
}