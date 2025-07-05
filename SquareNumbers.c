#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int square_numbers(){

   int a,b;
   while(scanf("%d %d",&a,&b)==2 &&(a!=0 || b!=0)){
   int x = 0;
   for(int i=0; i<=(int)sqrt(b); i++){
       if(i*i>=a && i*i<=b){
        x++;
       }    
   }

   printf("%d\n",x);
}

   return 0;
}