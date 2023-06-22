/*
. Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy

Example, say we have a file f1 with the following content
f1:
-----------------------
This is the file data
testing Case copy
application
-----------------------

./cp -s f1 f2
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application
-----------------------

./cp -l f1 f3
f3:
-----------------------
this is the tile data
testing case copy
application
-----------------------

./cp -u f1 f4
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION
-----------------------

./cp f1 f5
Should perform a normal copy

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpperCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destinationFile);
    }
}

void convertToLowerCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), destinationFile);
    }
}


void convertToPureUpperCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    int isFirstChar = 1;
    
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (isFirstChar && islower(ch)) {
            fputc(toupper(ch), destinationFile);
            isFirstChar = 0;
        } else {
            fputc(ch, destinationFile);
            
            if (ch == ' ' || ch == '\t' || ch == '\n') {
                isFirstChar = 1;
            } else {
                isFirstChar = 0;
            }
        }
    }
}



void performNormalCopy(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Include the source and destination of files.\n");
        printf("Use : ./a.out  sourcefile destinationfile\n");
        return 1;
    }

    char* option = argv[1];
    char* sourceFileName = argv[2];
    char* destinationFileName = argv[3];

    FILE* sourceFile = fopen(sourceFileName, "r");
    FILE* destinationFile = fopen(destinationFileName, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error file not included\n");
        return 1;
    }

    if (strcmp(option, "-s") == 0) {
        convertToPureUpperCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-u") == 0) {
        convertToUpperCase(sourceFile, destinationFile);
    } else {
        performNormalCopy(sourceFile, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
