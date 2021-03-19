#include <stdio.h>
int input = 2;

/*

    *try implimenting tree in file indexing 
    **currently running on normal file indexing

*/
void display_calendar(){
    int j = 1;
    printf("|SU||MO||TU||WE||TH||FR||SA|\n");
    //for loop for blank spaces 
    if (input <= 7)
    {
        for (int i = 1; i < input; i++)
        {
            printf("%4s", " ");
        }
        j = input;
    }
    


     int i = 1, count = 31;

    for (; i <= count;)
    {
        for (; (j <= 7) && ( i <= count); j++,i++)
        {
            printf("|%2d|", i);
        }
        printf("\n"); 
        j=1;
    }
    
}



int main(){
    FILE *note_handel = fopen("date-note-handel.txt", "rb+");
    display_calendar();

    return 0;
}