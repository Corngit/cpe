//這題不用管 doom's day 是什麼，直接算出 offset 就好
#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    char *week[] = {
        "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday"
    };
    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    for(int t=0;t<T;t++){
        int month,day;
        scanf("%d %d", &month, &day);
        int offset = 0;
        for(int i=0;i<month-1;i++){
            offset += daysInMonth[i];
        }
        offset += day - 1; // 因為 1 Jan 是 offset 0 所以要減 1
        int weekday = (offset + 6) % 7; // 1 Jan 2011 was a Saturday, which is index 6
        printf("%s\n", week[weekday]);
    }
    return 0;
}