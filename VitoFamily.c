// sort 之後取中位數
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int m;
        scanf("%d", &m);
        int* arr = (int*)malloc(sizeof(int)*m);
        for(int j=0; j<m; j++){
            scanf("%d", &arr[j]);
        }

        // sort
        for(int x=0; x<m-1; x++){
            for(int y=0; y<m-1-x; y++){
                if(arr[y] > arr[y+1]){
                    int temp = arr[y];
                    arr[y] =  arr[y+1];
                    arr[y+1] = temp;
                }
            }
        }

        // find median and calculate sum of absolute differences
        int median = arr[m/2];
        long long sum = 0;
        for(int j=0; j<m; j++){
            sum += abs(arr[j] - median);
        }
        printf("%lld\n", sum);
        free(arr);
    }
    return 0;
}