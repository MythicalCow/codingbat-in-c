#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int sleepIn(int weekday, int vacation){
    return !weekday || vacation;
}
//char takes up 1 byte
int main() {
    int x = sleepIn(FALSE, FALSE);
    char *sleepIn = malloc(6);
    if(x==0){
        strcpy(sleepIn, "FALSE");   
    }
    else{
        strcpy(sleepIn, "TRUE");
    }
    printf("sleep in: %s\n", sleepIn);
    free(sleepIn);
    return 0;
}

