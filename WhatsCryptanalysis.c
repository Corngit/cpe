#include <stdio.h>
#include <ctype.h>

int main(){
    int count;
    int ch;
    scanf("%d", &count);
    int cnt[26] = {0};
    while((ch =getchar()) != '\n' && ch!= EOF); // clear the newline after the number input
    for(int i=0; i<count; i++){
        while((ch = getchar())!='\n' && ch!= EOF){
           if(isalpha((unsigned char)ch)){           //isalpha 是在 ctype.h 下，只記錄是否為字母 
                ch = toupper((unsigned char)ch);    // toupper 也是在 ctype.h 下，將小寫都轉換為大寫
                cnt[ch-'A']++;
           }
        }
    }
    
    int maxFreq = 0;
    for(int j=0; j<26; j++){
        if(cnt[j]>maxFreq){
            maxFreq = cnt[j];
        }
    }
    for(int f = maxFreq; f>=1; f--){
        for(int k=0; k<26; k++){
            if(cnt[k]==f){
                printf("%c %d\n", 'A'+k, cnt[k]);
            }
        }
    }

return 0;
}