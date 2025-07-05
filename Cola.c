#include<stdio.h>
#include<math.h>

int Cola(){
    int N;
    int a,b;
    while(scanf("%d",&N) == 1){
        int total = N;
        int empty = N;
        
        while(empty >= 3){
            int new = empty/3;
            total = total + new;
            empty = empty%3 + new;
        }

        if(empty == 2){
            total = total + 1;
        }
    
    printf("%d\n", total);

    }

}