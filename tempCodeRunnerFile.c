#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int char_value(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 10;
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 36;
    }
    return -1; // Invalid character
}
int main(){
    char input[1005];
    while(scanf("%s",input) == 1){
        long long sum = 0;
        int max_val = -1;
        int length = (int)strlen(input);
        for(int i = 0; i < length; i++){
            int val = char_value(input[i]);
            if(val > max_val){
                max_val = val;
            }
            sum += val;
        }
        int base = max_val + 1;
        if(base < 2){
            base = 2;
        }

        int ans = -1;
        for(int b = base; b <= 62; b++){
            int mod = b-1;
            if(sum % mod == 0){
                ans = b;
                break;
        }
    }

    if(ans != -1){
        printf("%d\n", ans);
    } else {
        printf("such number is impossible!\n");
    }
    }
    return 0;
    
}