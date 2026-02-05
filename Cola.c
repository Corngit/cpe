#include<stdio.h>
#include<math.h>

int main(){
    int N;
    int a,b;
    while(scanf("%d",&N) == 1){
        int total = N;
        int empty = N;
        
        while(empty >= 3){
            int get = empty/3;
            total = total + get;
            empty = empty%3 + get;
        }

        if(empty == 2){
            total = total + 1;
        }
    
    printf("%d\n", total);

    }

}