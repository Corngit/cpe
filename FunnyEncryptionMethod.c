#include<stdio.h>

int main(){
    int T;   //T為測資數量
    int N;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int x1,x2,x3;          
        int y1,y2;          
        int count1 = 0, count2 = 0;      
        scanf("%d",&N);

        //算 b1
      
        y1 = N;
        while( y1 >= 0){
            if (y1%2 ==1){
                count1 += 1;
            }
            if (y1 ==0){
                break;
            }
            y1 = y1/2;
        }
        //算 b2
        y2 = N;
        while(y2 >= 0){
            x2 = y2%10;
            x3 = x2/2;
            if(x2%2 ==1){
                count2 += 1;
            }
            while( x3 >= 0){
                if (x3%2 ==1){
                    count2 += 1;
                }
                if (x3 ==0){
                    break;
                }
                x3 = x3/2;
            }
            if (y2 ==0){
                break;
            }
            y2 = y2/10;
        }

        printf("%d %d\n",count1,count2);
    }
    return 0;
}