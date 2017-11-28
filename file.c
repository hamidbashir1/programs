#include<stdio.h>
#include<stdlib.h>

void readEntireFile(void);
void readUntilMarker(char marker);
void writeToFile(void);

int main(void)
{
    readEntireFile();
    printf("\n--------------------------------\n");
    readUntilMarker('m');
    writeToFile(void);

    return EXIT_SUCCESS;
}

void readEntireFile(void)
{
    int ch;
    FILE *fp;
    fp = fopen("/var/www/projects/message", "r");
    ch = getc(fp);
    while(ch != EOF);
    {
        putchar(ch);
        ch = getc(fp);
    }
    fclose(fp);
}

void readUntilMarker(char marker)
{
     int ch;
    FILE *fp;
    fp = fopen("/var/www/projects/message", "r");
    ch = getc(fp);
    while(ch != marker);
    {
        putchar(ch);
        ch = getc(fp);
    }
    fclose(fp);
}

void writeToFile(void)
{
    int i;
    FILE *fp;
    fp = fopen("/var/www/projects/message" , "w");
    char name[10] = "Hamid";
    fprintf(fp,"This message is for %s\n",name);
    fclose(fp);

}
