/*


 Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Sentence Case
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
#include <ctype.h>
#include <string.h>

void convertToUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLowerCase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void capitalizeFirstLetter(char *str) {
    int isFirstChar = 1;
    while (*str) {
        if (isFirstChar && isalpha((unsigned char)*str)) {
            *str = toupper((unsigned char)*str);
            isFirstChar = 0;
        } else if (!isalpha((unsigned char)*str)) {
            isFirstChar = 1;
        }
        str++;
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char line[1000];

    printf("Enter the option (u/l/s): ");
    char option;
    scanf(" %c", &option);

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Failed to open the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        switch (option) {
            case 'u':
                convertToUpperCase(line);
                break;
            case 'l':
                convertToLowerCase(line);
                break;
            case 's':
                capitalizeFirstLetter(line);
                break;
            default:
                break;
        }

        fputs(line, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
