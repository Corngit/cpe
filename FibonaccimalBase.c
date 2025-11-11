#include<stdio.h>

#define Max_FIB 50

int fib[Max_FIB];  //儲存費波那契數列

void bulid_fibs(){
    fib[0] = 1;
    fib[1] = 2;

    for(int i=2; i<Max_FIB; i++){
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] > 2147483647)
        break;
    }
}

int FibonaccimalBase(){
    int N,R; //有N個數字, 數字為R
    scanf("%d",&N);
    bulid_fibs();
    
    for(int i=0; i<N; i++){
        scanf("%d",&R);
        int j;
        for(j=0; (fib[j]<=R)&&(j<Max_FIB); j++);
        j--;     //由於當跳出for迴圈時，fib[i] 之值是大於R的 所以要往回跳到最後一個<=R的那個 index

        int started = 0;
        printf("%d = ",R);

        for (;j>=0;j--){
            if (fib[j]<=R){
                printf("1");
                R = R - fib[j];
                started = 1;
            }else if(started){
                printf("0");
            }
        }

        if(!started)
            printf("0");
        
        printf(" (fib)\n");
    }

    return 0;
}