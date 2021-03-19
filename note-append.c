#include <stdio.h>
#include <string.h>

#define HANDEL FILE *record_file = fopen("calendar-notes.txt", "rb+")

#pragma pack(1)
typedef struct noteHandel {
    int year, month, date, dayNumber ;
    char note[100];
}noteStruct;


#pragma pack()

void appendNote(int, int,int , char *);
int main(){
    int date, month, year;
    char text[100];

    printf("Enter Note Details [DD<space>MM<space>YYYY]: ");
    scanf("%d %d %d ", &date, &month, &year);

    printf("Enter Note : ");
    fgets(&text, sizeof(text), stdin);

    appendNote(date, month, year, text);


}

void appendNote(int date, int month, int year, char * text){
    HANDEL;
    noteStruct note;
    note.date = date;
    note.month = month;
    note.year = year;
    strcpy(note.note, text);
    fseek(record_file, 0, SEEK_END);
    int ret = fwrite(&note, sizeof(note), 1, record_file);
    fclose(record_file);
}

void deleteNote(int date, int month, int year){
    HANDEL;
    int totalNotes = totalNotes(record_file);
    noteStruct notes[totalNotes];
    fread(&notes, sizeof(notes), 1, record_file);   //might trigger a BUG
    int current = 0;
    while (current <= totalNotes)
    {
        if (notes[current].year == year)
        {
            if (notes[current].month == month)
            {
                if (notes[current].date == date)
                {
                    /* code */
                }
                
            }
            
        }
        
    }
    
}
int totalNotes(FILE *file){
    fseek(file, 0, SEEK_END);
    return (ftell(file));
}