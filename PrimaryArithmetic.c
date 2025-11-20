#include <stdio.h>

int main(){
    int count;
    int a,b;
    while(scanf("%d %d",&a,&b) == 2 && !(a==0 && b==0)){
    int carry = 0;
    count = 0;
    while(a>0 || b>0){
        int digitA = a % 10;
        int digitB = b % 10;
        int sum = digitA + digitB + carry;
        if(sum >= 10){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        a = a / 10;
        b = b / 10;
        }
        if(count == 0){
        printf("No carry operation.\n");
        }else if(count == 1){
        printf("1 carry operation.\n");
        }else{
        printf("%d carry operations.\n",count); 
        }
    }
    return 0;
}