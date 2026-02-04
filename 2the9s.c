#include<stdio.h>
#include <string.h>

int main(){
    char N[1001];
    while(scanf("%s", N) && strcmp(N, "0") != 0){
        int len = strlen(N);
        int sum = 0;
        for(int i = 0; i < len; i++){
            sum += (N[i] - '0');
        }
        int degree = 1;
        while(sum%9 == 0 && sum!= 9){
            int temp_sum = 0;
            while(sum > 0){
                temp_sum += sum % 10;
                sum /= 10;
            }
            sum = temp_sum;
            degree++;
        }
        if(sum % 9 == 0){
            printf("%s is a multiple of 9 and has 9-degree %d.\n", N, degree);
        } else {
            printf("%s is not a multiple of 9.\n", N);
        }
    }
}