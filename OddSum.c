#include <stdio.h>

int Odd_Sum(){
    int a,b;
    int count;
    scanf("%d",&count);
    for(int j=1; j<=count; j++){
    a=0;
    b=0;    
    scanf("%d %d",&a,&b);
    int sum = 0;
    for(int i=a; i<=b; i++){
         if(i%2 == 1)
           sum=sum + i;
    }

    printf("Case %d: %d\n",j,sum);

    }

    return 0;

    
}