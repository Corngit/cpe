//需使用 long long int 

#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a>b){
            printf("%lld",a-b);
            printf("\n");
        }
        else if(a<b){
            printf("%lld",b-a);
            printf("\n");
        }
        else{
            printf("0\n");
        }
    }

}