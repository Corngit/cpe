#include<stdio.h>   //換行之間會有/0的問題 所以要使用getchar()可以涵蓋  ( scanf() 遇到空格會直接結束，gets()可以包含空格)

int main(){
    int T;   //T為測資數量
    char square[110][21]; //矩形大小
    int Q; //Q為詢問數量
    int r,c;

    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int M=0,N=0,Q=0;
        scanf("%d %d %d",&M,&N,&Q);
        getchar();

    for(int j=0; j<M; j++){
        for(int k=0; k<N; k++){
            scanf("%c",&square[j][k]);              //讀取陣列完畢
        }
        getchar();
    }

        printf("%d %d %d\n",M,N,Q);

    for(int l=0; l<Q; l++){                        //主要運算在這
        scanf("%d %d",&r,&c);
        char center = square[r][c];
        int count=1;
       
       for(int radius = 1;;radius++){
        if(r - radius < 0 || r + radius >= M || c - radius < 0 || c + radius >= N){
            break;
        }

        char ch = center;
        int x,y;
        int valid = 1;

        for (x = c - radius; x <= c + radius && valid; x++) {
        if (square[r - radius][x] != ch || square[r + radius][x] != ch)      //要看陣列裡的東西，上下先做 再做左右
            valid = 0;
       }

        for (y = r - radius + 1; y <= r + radius - 1 && valid; y++) {
        if (square[y][c - radius] != ch || square[y][c + radius] != ch)
            valid = 0;
       }

      if (!valid) break;

    count = 2 * radius + 1;
    }

    printf("%d\n",count);
    }



    

    }
}

//只檢查對角

// for(int i; i<max(M,N); i++){
//            for(int j=-i; j<=i; j++){
//                if((square[r+i][c+j] == square[r-i][c+j]) &&(square[r-i][c+j] == square[r+j][c+i])&&(square[r+j][c+i] == square[r+j][c-i])){
//                    count = count + 1;
//                }else{
//                    printf("%d",count);
//                }                         
//            }
//        }                     