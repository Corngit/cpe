#include <stdio.h>
#include <string.h>
//times紀錄共同字母出現次數
int main(){
    char A[2000], B[2000];

    while(fgets(A, sizeof(A), stdin) != NULL && fgets(B, sizeof(B), stdin) != NULL){
        int countA[26] = {0};
        int countB[26] = {0};

        for(int i = 0; A[i] != '\0'; i++){
            countA[A[i] - 'a']++;
        }

        for(int i = 0; B[i] != '\0'; i++){
            countB[B[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++){
            int times;
            if(countA[i] < countB[i]){
                times = countA[i];
            }else{
                times = countB[i];
            }
            while(times>0){
                printf("%c", 'a' + i);
                times--;
            }
        }
        printf("\n");
    }
    return 0;
}