#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0){
            break;
        }
        //initialize the die numbers in cube
        int die[7];
        for(int i = 1; i <= 6; i++){
            die[i] = i;
        }
        //perform the rotations
        for(int i = 0; i < n; i++){
            char dir[10];
            scanf(" %s", dir);
            int temp;
            switch(dir[0]){
                case 'n':
                    temp = die[1];
                    die[1] = die[5];
                    die[5] = die[6];
                    die[6] = die[2];
                    die[2] = temp;
                    break;
                case 's':
                    temp = die[1];
                    die[1] = die[2];
                    die[2] = die[6];
                    die[6] = die[5];
                    die[5] = temp;
                    break;
                case 'e':
                    temp = die[1];
                    die[1] = die[3];
                    die[3] = die[6];
                    die[6] = die[4];
                    die[4] = temp;
                    break;
                case 'w':
                    temp = die[1];
                    die[1] = die[4];
                    die[4] = die[6];
                    die[6] = die[3];
                    die[3] = temp;
                    break;
            }
        }
        printf("%d\n", die[1]);
        
    
    }
    return 0;
}