//國中數學，平行四邊形ABCD 求D = A + C - B
//可能會有精度問題，可將float改成double
#include <stdio.h>

int main() {
    float x1,y1,x2,y2,x3,y3,x4,y4;

    while (scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4) == 8) {

        float Dx, Dy;
        // 判斷哪兩點是相同的
        if (x1 == x2 && y1 == y2) {
            Dx = x3 + x4 - x1;
            Dy = y3 + y4 - y1;
        } else if (x1 == x3 && y1 == y3) {
            Dx = x2 + x4 - x1;
            Dy = y2 + y4 - y1;
        } else if (x1 == x4 && y1 == y4) {
            Dx = x2 + x3 - x1;
            Dy = y2 + y3 - y1;
        } else if (x2 == x3 && y2 == y3) {
            Dx = x1 + x4 - x2;
            Dy = y1 + y4 - y2;
        } else if (x2 == x4 && y2 == y4) {
            Dx = x1 + x3 - x2;
            Dy = y1 + y3 - y2;
        } else {
            Dx = x1 + x2 - x3;
            Dy = y1 + y2 - y3;
        }

        printf("%.3f %.3f\n", Dx, Dy);
    }
    return 0;
}