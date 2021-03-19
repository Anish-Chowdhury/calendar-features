#include <stdio.h>
#pragma pack(1)

typedef struct DAYnode
{
    int day;
    char textFeild[100];
}day;

typedef struct MONTHnode
{
    int month;
    day * date[31] ;
}month;

typedef struct rootNodeYEAR
{
    int year;
    month * mnth[12];
}structure;
#pragma pack() 

int main(){


    int z = sizeof(structure);

    /* 
        * sizeof z = 52 
        * expected sizeof z = 31176
    */
    printf("%d\n", z);

    return 0;
}