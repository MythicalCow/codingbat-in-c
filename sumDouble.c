//write a boiler plate

#include <stdio.h>
#include <string.h>

int sumDouble(int x, int y){
    int sum = x + y;
    if (x == y){
        sum = sum * 2;
    }
    return sum;
}

int main(){
    printf("sumDouble %d\n", sumDouble(1,1));
    return 0;
}

