#include <stdio.h>

int main(){

    int Xmax,Ymax;
    int x,y;
    char position;
    int scent[51][51] = {0}; //紀錄有沒有留下robot的痕跡
    scanf("%d %d", &Xmax, &Ymax);
    while (scanf("%d %d %c", &x, &y,&position) == 3) {

        char commands[101];
        if (scanf("%s", commands) != 1) break;
        int lost = 0;
        for(int i=0; commands[i]!='\0' && !lost; i++){
            char command = commands[i];
            if(command == 'R'){
                if(position == 'N'){
                    position = 'E';
                }else if(position == 'E'){
                    position = 'S';
                }else if(position == 'S'){
                    position = 'W';
                }else if(position == 'W'){
                    position = 'N';
                }
            }else if(command == 'L'){
                if(position == 'N'){
                    position = 'W';
                }else if(position == 'W'){
                    position = 'S';
                }else if(position == 'S'){
                    position = 'E';
                }else if(position == 'E'){
                    position = 'N';
                }
            }else if(command == 'F'){
                int nx=x,ny=y;
                if(position == 'N'){ 
                    ny = y + 1;
                }    
                if(position == 'S'){
                    ny = y - 1;
                }
                if(position == 'E'){    
                    nx = x + 1;
                }
                if(position == 'W'){
                    nx = x - 1;     
                }
                if (nx < 0 || nx > Xmax || ny < 0 || ny > Ymax) {      
                    if (!scent[x][y]) {          
                        scent[x][y] = 1;         
                        lost = 1;                 
                    }
                } else {
                    x = nx; y = ny;
                }
            }
        }
       if(lost==1){
            printf("%d %d %c LOST\n",x,y,position);
        }
        else{
            printf("%d %d %c\n", x, y, position);
        }
    }    
    return 0;
}