#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* stringTimes(char* str, int n){
    char* ret = malloc((strlen(str)-1)*n+1);
    for(int i = 0; i < n; i++){
        strcat(ret, str);
    }
    return ret;
}
int main() {
    char* str = "Hi";
    int n = 5;
    printf("%s\n", stringTimes(str, n));
    return 0;
}
