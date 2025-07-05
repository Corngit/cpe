#include<stdio.h>   //是用bubble sort啦(比較相鄰兩個) selection sort 是會做標記再換(因此不一定是相鄰)

int Train_Swapping(){
int N,L;          //N表示測資數量 L表示火車長度
int S;            //S表示最少交換次數 
int array[50];

scanf("%d",&N);
    for(int i=1; i<=N; i++){
        scanf("%d",&L);

        for(int j=0; j<L; j++){
            scanf("%d",&array[j]);
        }

        int S=0;
            for(int i=0; i<L-1; i++){

                for(int j=0; j<L-1-i; j++){
                    if(array[j]>array[j+1]){
                       int temp = array[j];
                       array[j] = array[j+1];
                       array[j+1] = temp;
                       S = S + 1; 
                    }
                }
            }
        printf("Optimal train swapping takes %d swaps\n",S);
}

}