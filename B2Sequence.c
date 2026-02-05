#include <stdio.h>

int main(){
    int N;
    int CaseNumber = 1;

    while(scanf("%d",&N)==1){
        int sequence[10001] = {0}; //初始化陣列為0
        int b2=0;
        for(int i=1;i<=N;i++){
            scanf("%d",&sequence[i]);
            if(sequence[i]<=sequence[i-1]){
                b2=1;
            }
        }
        printf("Case #%d: ", CaseNumber++);
        int used_sum[20000]={0}; //用來紀錄已經出現過的和，初始化為0
        int used_sum_index = -1;
        //每一個新的和都要跟之前的和做比較
        if(b2 == 0){
            for(int i=1;i<=N;i++){
                for(int j=i;j<=N;j++){
                    if(used_sum[sequence[j]+sequence[i]]!=0){
                        b2=1;
                        break;
                    }else{
                        used_sum[sequence[j]+sequence[i]]=1;
                    }
                }
                if(b2==1){
                    break;
                }
            }
        }
        if(b2==0){
            printf("It is a B2-Sequence.\n");
        }else{
        printf("It is not a B2-Sequence.\n");
        }
    }
}
