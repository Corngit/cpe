#include <stdio.h>
#include <math.h>

int main(){
    double prob,p;
    int S;
    int N,i;
    scanf("%d",&S);  
    for(int j=0; j<S; j++){
        N=0;
        p=0;
        i=0;
        scanf("%d %lf %d",&N,&p,&i);
            double r = pow(1-p,N);
            prob = (p*pow(1-p,i-1))*((double)(1.0)/(1-r));         
        
        printf("%.4lf\n",prob);


    
    }

    return 0;
}