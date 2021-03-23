
FLUSH;
     printf("Enter Note Details [DD<space>MM<space>YYYY]: ");
    scanf("%d", &date);
    FLUSH;
    scanf("%d", &month);
    FLUSH;
    scanf("%d", &year);
FLUSH;
    printf("Enter Note : ");
    gets(text);
    appendNote(date, month, year, text);

FLUSH;
     printf("Enter Note Details [DD<space>MM<space>YYYY]: ");
    scanf("%d", &date);
    FLUSH;
    scanf("%d", &month);
    FLUSH;
    scanf("%d", &year);
FLUSH;

    printf("Enter Note : ");
    gets(text);
    appendNote(date, month, year, text);