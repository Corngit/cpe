#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++){
        printf("Test #%d: ", t);

        int n;
        scanf(" N = %d", &n);

        long long matrix[105][105];
        int isSymmetric = 1;

        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%lld", &matrix[i][j]);
                if(matrix[i][j] < 0)
                    isSymmetric = 0;
            }
        }

        
        for(int i = 0; i < n && isSymmetric; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != matrix[n-1-i][n-1-j]){
                    isSymmetric = 0;
                    break;
                }
            }
        }

        if(isSymmetric){
            printf("Symmetric.\n");
        } else {
            printf("Non-symmetric.\n");
        }
    }

    return 0;
}
