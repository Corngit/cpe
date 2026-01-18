#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);  // number of test cases
    while(t--){
        int n, p; // n: number of days, p: number of political parties
        scanf("%d %d", &n, &p);
        int* hartals = (int*)calloc(n + 1, sizeof(int)); // calloc: initialize to 0
        for(int i = 0; i < p; i++){
            int h;
            scanf("%d", &h);
            for(int day = h; day <= n; day += h){
                hartals[day] = 1;
            }
        }
        int lost_days = 0;
        for(int day = 1; day <= n; day++){
            if(day % 7 == 6 || day % 7 == 0) 
                continue; // skip Fridays and Saturdays
            if(hartals[day]) 
                lost_days++;
        }
        printf("%d\n", lost_days);
        free(hartals);
    }
    return 0;
}