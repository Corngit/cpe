# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

# define r 6440
# define pi 3.14159265358979323846

int main(){
    double s,a;
    char unit[5];
    while(scanf("%lf %lf %s", &s, &a, unit) == 3){
        double R = r + s;

        if(unit[0] == 'm'){
            a = a/60.0;
        }
        if(a > 180.0){
            a = 360.0 - a;
        }
        
        double theta = a * (pi / 180.0);
        double arc = R * theta;

        double chord = 2.0 * R * sin(theta / 2.0);

        printf("%.6lf %.6lf\n", arc, chord);
    }
    return 0;
}