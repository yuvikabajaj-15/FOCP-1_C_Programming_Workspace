#include <stdio.h>
int main(void){
    int x=10, y=20;
    /*if(x>y){
        printf("%d\n",x);
    }
    else{
        printf("%d\n",y);
    }*/

   /* (x>y)? printf("%d\n",x): printf("%d\n",y); */

   int max=(x>y)? x: y;
   printf("%d\n",max);
   return 0;
}