#include <stdio.h>

int main(){
    FILE *file = fopen("calendar-notes.bin", "rb+");
    fseek(file, 0, SEEK_SET);
    char data;
    while (!feof(file))
    {
        fread(&data, sizeof(data), 1, file);
        printf("| %c |", data);
    }
    
    return 0;
}