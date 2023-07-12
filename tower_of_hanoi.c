// tower of hanoi..

#include <stdio.h>

void toh(char x,char y,char z,int n){
    if(n==1){
        printf("%c->%c\n",x,y);
    }
    else{
        toh(x,z,y,n-1);
        printf("%c->%c\n",x,y);
        toh(z,y,x,n-1);
    }
}

int main()
{
    
    toh('X','Y','Z',4);
    return 0;
}


/*
Explaination

1. in tower of hanoi problem, we need to transer all the ring from tower x to tower y, using tower z as auxilary 
   tower;
2. in recursive approach for tower of hanoi. we first need to transfer n-1 rings from x to z then make a move to 
   transfer largest ring from x to y and then remaining n-1 rings from z to y
3. to showcase the moves required to move all rings from x to y. we have written a function that prints all valid 
   move for n rings.
4. in main function we call the function with n=4 an get all moves in valid order. 

*/
