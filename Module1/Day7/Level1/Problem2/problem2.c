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
