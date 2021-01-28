#include <stdio.h> 


float Q_rsqrt(float number){
    /*
        Fast Inverse Square Root — A Quake III Algorithm
        Nemean - https://www.youtube.com/watch?v=p8u_k2LIZyo
    */
    long i;
    float x2, y;
    const float threehalfs = 1.5f;

    x2 = number * 0.5F;
    y = number;
    i = *( long * ) &y;         // evil floting point bit hack 
    i = 0x5f3769df - ( i >> 1);  // what the fuck?
    y = * (float *) &i;
    y = y * (threehalfs - (x2 * y * y)); // 1st iteration 
    // y = y * (threehalfs - (x2 * y * y)); // 2nd iteration, can be removed  
    return y; 
}   

int main(){
    float x = Q_rsqrt(9.5);
    printf("The integer is: %f\n", x);
    return 0;
}

