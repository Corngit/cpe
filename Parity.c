
#include <stdio.h>

int main(){
    int I;
    int stack[32];
    while(scanf("%d", &I) && I != 0){
        int parity = 0;
        int index = 0;
        while(I > 0){
            stack[index++] = I % 2;
            I /= 2;
        }
        for(int i = 0; i < index; i++){
            if(stack[i] == 1){
                parity++;
            }
        }
        printf("The parity of ");
        for(int i = index - 1; i >= 0; i--){
            printf("%d", stack[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
}