#include <stdio.h>

int The_3n1_problem(){
    int n,a,b;
    int i,j,max;
    int num;
    while(scanf("%d %d",&i,&j) == 2){     
    if(i>j){
        b = i;
        a = j;
    }else{
        a = i;
        b = j;
    }

    max = 0;
    for(int m=a; m<=b; m++){
    num = 1;                       
    n = m;
    while (n!=1)                 
    {
        if (n%2 == 1){
            n = 3*n + 1;
        }else{
            n = n/2;
        }
        num = num + 1;
    }

    if(num>max){
        max = num;
    }
    }
    printf("%d %d %d \n",i,j,max);  
    }
    return 0;
}