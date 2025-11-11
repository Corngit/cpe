#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int YouCanSay11(){
    char N[1001] ;
    int a;   //a是兩數相減
    int c,d;
    while(scanf("%s",N) == 1 && !(N[0] == '0'&& N[1] == '\0')){
        c=0;
        d=0;
        for(int i = 0; i<strlen(N); i++){
            if(i%2 == 1){
                c = c + N[i] - '0';
            }else{
                d = d + N[i] - '0';
            }
        }

        

        a = abs(c-d);

        if(a%11 == 0){
            printf("%s is a multiple of 11.\n",N);
        }else{
            printf("%s is not a multiple of 11.\n",N);    
        }
    }
   
}
