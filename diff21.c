#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float diff21(float n){
    float ret = fabs(21.0-n);
    if(n <= 21.0){
        return ret;
    }
    else{
        return 2*ret;
    }
}

int main(int argc, char** argv){
    float n = strtof(argv[1], NULL);
    printf("diff21: %f\n", diff21(n));
}

