//%c 跟 %s, 前者會把字元當作字元來處理, 後者會把字元當作字串來處理,當遇到字串結束符號 '\0' 時會停止輸出.但若為\n,%c 會輸出換行符號, 而 %s 則會繼續輸出直到遇到字串結束符號 '\0'.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,m;
    char grid[105][105];
    int count[105][105];
    int fields = 1;

    while(scanf("%d %d", &n, &m) == 2){
        if(n == 0 && m == 0) break;

        // Initialize count array
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                count[i][j] = 0;
            }
        }

        // Read the grid
        for(int i = 0; i < n; i++){
            scanf("%s", grid[i]);
        }

        // Count mines
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '*'){
                    for(int dx = -1; dx <= 1; dx++){
                        for(int dy = -1; dy <= 1; dy++){
                            int ni = i + dx;
                            int nj = j + dy;
                            if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] != '*'){
                                count[ni][nj]++;
                            }
                        }
                    }
                }
            }
        }

        // Print the result
        if(fields > 1){ 
            printf("\n");
        }
        printf("Field #%d:\n", fields++);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '*'){
                    printf("*");
                } else {
                    printf("%d", count[i][j]);
                }
            }
            printf("\n");
        }
    }
}