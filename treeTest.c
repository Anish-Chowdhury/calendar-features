#include <stdio.h>

typedef struct parent
{
    int data ; 
} papa ;


int main(){
    papa x;
    x.data = 15;
    printf("%d\n", x.data);
    
    return 0;
}