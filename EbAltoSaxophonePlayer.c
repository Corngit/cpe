#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    getchar(); // Consume the newline character after the integer input
    while(T--){
        char s[205];
        fgets(s, sizeof(s), stdin);

        int count[11]= {0};
        int prev[11]= {0};

        for(int k = 0; s[k] && s[k] != '\n'; k++){
        int current[11]= {0};
        char notes = s[k];
        
        if (notes == 'c')
            current[2]=current[3]=current[4]=current[7]=current[8]=current[9]=current[10]=1;
        else if (notes == 'd')
            current[2]=current[3]=current[4]=current[7]=current[8]=current[9]=1;
        else if (notes == 'e')
            current[2]=current[3]=current[4]=current[7]=current[8]=1;
        else if (notes == 'f')
            current[2]=current[3]=current[4]=current[7]=1;
        else if (notes == 'g')
            current[2]=current[3]=current[4]=1;
        else if (notes == 'a')
            current[2]=current[3]=1;
        else if (notes == 'b')
            current[2]=1;
        else if (notes == 'C')
            current[3]=1;
        else if (notes == 'D')
            current[1]=current[2]=current[3]=current[4]=current[7]=current[8]=current[9]=1;
        else if (notes == 'E')
            current[1]=current[2]=current[3]=current[4]=current[7]=current[8]=1;
        else if (notes == 'F')
            current[1]=current[2]=current[3]=current[4]=current[7]=1;
        else if (notes == 'G')
            current[1]=current[2]=current[3]=current[4]=1;
        else if (notes == 'A')
            current[1]=current[2]=current[3]=1;
        else if (notes == 'B')
            current[1]=current[2]=1;


        for(int i = 0; i < 11; i++){
            if(current[i] == 1 && prev[i] == 0){
                count[i]++;
            }
        }
        for(int i = 1; i <= 10; i++){ // Update prev to current for the next iteration because don't need to move the finger if the key is already pressed
            prev[i] = current[i];
        }
    }

    for(int i=1;i<=10;i++){
        if(i>1) {
            printf(" ");
        }
        printf("%d", count[i]);
    }
    printf("\n");
    }
}    